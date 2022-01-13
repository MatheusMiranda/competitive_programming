#include <iostream>
#include <cstring>
#include <queue>
#include <cmath>
#include <vector>

using namespace std;

using vi = vector <long long int>;
using ii = pair <long long int, long long int>;
using edge = pair <long long int, ii>;
priority_queue <edge,vector<edge>,greater<edge> > pq;
long long int contaSet = 0;

class UFDS{

  long long int m_count;
  vi m_parents, m_rank;

public:
  UFDS(long long int V) : m_count(V), m_parents(V+1, 0), m_rank(V+1, 0){
    for(long long int i=1; i<=V; i++)
      m_parents[i]=i;
  }

  long long int find_set(long long int u){
    return m_parents[u] ==  u ? u : (m_parents[u] = find_set(m_parents[u]));
  }

  bool same_set(long long int u, long long int v){
    return find_set(u) == find_set(v);
  }

  void union_set(long long int u, long long int v){
    if(same_set(u, v))
      return;

    long long int p = find_set(u);
    long long int q = find_set(v);

    if(m_rank[p] >= m_rank[q])
      m_parents[q] = p;
    else
      m_parents[p] = q;

    if(m_rank[p] == m_rank[q])
      m_rank[p]++;

    m_count--;
  }

  long long int count() const{
    return m_count;
  }
};

long long int kruskal(long long int V){

    UFDS ufds(V);
    long long int D = 0;

    while(!pq.empty()){

        auto e = pq.top();pq.pop();

        long long int w = e.first;
        long long int l = e.second.first;
        long long int t = e.second.second;

        if(not ufds.same_set(l,t)){
            ufds.union_set(l,t);
						contaSet--;
            D+=w;
        }

    }

    return D;

}

int main(){

    long long int n,k,j,dist;

		scanf("%lld",&n);
		contaSet = n;

		for(long long int i = 1;i < n;++i){

				scanf("%lld",&k);

				for(long long int l  = 0;l < k;++l){

								scanf("%lld %lld",&j,&dist);
								pq.push(edge(dist,ii(i,j)));

				}
		}

		long long int D = kruskal(n);
		printf("%lld %lld\n",contaSet,D);

  return 0;
}
