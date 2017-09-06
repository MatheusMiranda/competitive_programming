#include <iostream>
#include <cstring>
#include <queue>
#include <cmath>
#include <vector>

using namespace std;

using vi = vector <int>;
using ii = pair <int, int>;
using edge = pair <double, ii>;
priority_queue <edge,vector<edge>,greater<edge> > pq;
vector<ii> cord;

class UFDS{

  int m_count;
  vi m_parents, m_rank;

public:
  UFDS(int V) : m_count(V), m_parents(V+1, 0), m_rank(V+1, 0){
    for(int i=1; i<=V; i++)
      m_parents[i]=i;
  }

  int find_set(int u){
    return m_parents[u] ==  u ? u : (m_parents[u] = find_set(m_parents[u]));
  }

  bool same_set(int u, int v){
    return find_set(u) == find_set(v);
  }

  void union_set(int u, int v){
    if(same_set(u, v))
      return;

    int p = find_set(u);
    int q = find_set(v);

    if(m_rank[p] >= m_rank[q])
      m_parents[q] = p;
    else
      m_parents[p] = q;

    if(m_rank[p] == m_rank[q])
      m_rank[p]++;

    m_count--;
  }

  int count() const{
    return m_count;
  }
};

double kruskal(int V){

    UFDS ufds(V);
    double D = 0;

    while(!pq.empty()){

        auto e = pq.top();pq.pop();

        double w = e.first;
        int l = e.second.first;
        int t = e.second.second;

        if(not ufds.same_set(l,t)){
            ufds.union_set(l,t);
            D+=w/100.0;
        }

    }

    return D;

}

int main(){

    int n,c;

    scanf("%d",&c);

    for (int i = 0; i < c; ++i)
    {

        scanf("%d",&n);

        for (int l = 0; l < n; ++l)
        {
            int x,y;

            scanf("%d %d",&x,&y);
            cord.push_back(ii(x,y));
        }

        int k = 0;
        for(int x = 0;x < n;++x){

            for(int y = k;y < n;++y){

                if(x != y){

                  double distancia = hypot(cord[x].first - cord[y].first,cord[x].second - cord[y].second);
                  pq.push(edge(distancia,ii(x,y)));

                }

            }
            k+=1;
        }

        double D = kruskal(n);
        printf("%.2f\n",D);
        cord.clear();

    }

  return 0;
}
