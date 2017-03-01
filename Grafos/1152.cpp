#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

#define MAX 200010

using vi = vector <int>;
using ii = pair <int, int>;
using edge = pair <int, ii>;
priority_queue <edge,vector<edge>,greater<edge> > pq;

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

int kruskal(int V){

    UFDS ufds(V);
    int D = 0;

    while(!pq.empty()){

        auto e = pq.top();pq.pop();

        int w = e.first;
        int l = e.second.first;
        int t = e.second.second;

        if(not ufds.same_set(l,t)){
            ufds.union_set(l,t);
            D+=w;
        }

    }

    return D;

}

int main(){

    int m,n,total = 0;

    while(scanf("%d %d",&m,&n),m | n){

        int x,y,z;

        for(int i = 0;i < n;++i){

            scanf("%d %d %d",&x,&y,&z);
            total += z;
            pq.push(edge(z,ii(x,y)));

        }

        int D = kruskal(m);

        total -= D;

        printf("%d\n",total);

        total = 0;

    }

  return 0;
}
