#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;
using ii = pair<int,int>;
using vi = vector<int>;
using edge = pair<int,ii>;

#define MAX 510
#define INF 300000000

int matrizona[MAX][MAX];
vector<ii> vetorzao[MAX];
priority_queue<ii,vector<ii>,greater<ii> > pq;
vi dist;
int n;

void digs(int s,int vve){

		dist.assign(vve + 1,INF);		
		pq.push(ii(0,s));
		dist[s] = 0;

					//	for(int a = 0;a < n;++a){
						//	printf("%d ",dist[a]);
					//}				
		
		while(!pq.empty()){

				ii front = pq.top();pq.pop();

				int d = front.first;
				int u = front.second;

				if(d > dist[u]) continue;

				for(auto v : vetorzao[u]){
						if(dist[u] + v.second < dist[v.first]){
				
									dist[v.first] = dist[u] + v.second;
									pq.push(ii(dist[v.first], v.first));
		
						}

				}				

		}
}

int main(){

	int e;

	while(scanf("%d %d",&n,&e),n | e){

			memset(matrizona,0,sizeof matrizona);

			for(int l = 0;l <= n;++l){
					vetorzao[l].clear();
			}				

			for(int x = 0;x < e;++x){

					int a,b,h;
					scanf("%d %d %d",&a,&b,&h);
					matrizona[a][b] = 1;

					if(matrizona[b][a] == 1){	

							for(int i = 0;i < vetorzao[b].size();++i){
								if(vetorzao[b][i].first == a){
											 	vetorzao[b][i].second = 0;
												break;
								}				
							}
					
									vetorzao[a].push_back(ii(b,0));				
					}else{

							vetorzao[a].push_back(ii(b,h));
					}
			}

			int k;

			scanf("%d",&k);
			int o,f;

			for(int w = 0;w<k;++w){
		
					scanf("%d %d",&o,&f);
					digs(o,n);				
			
					if(dist[f] != INF)
						printf("%d\n",dist[f]);
					else
						printf("Nao e possivel entregar a carta\n");	
				
					//memset(dist,INF,sizeof dist);	

			}
			printf("\n");

	}

	return 0;

}

