#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

#define MAX 270
#define INF 400000000

using namespace std;
using ii = pair<int,int>;
using vi = vector<int>;
using edge = pair<int,ii>;

priority_queue<ii,vector<ii>,greater<ii> > pq;
vector<ii> vetorzao[MAX];
vector<ii> rota[MAX];
int rotas[MAX];
vi dist;

void digs(int s){

				dist.assign(MAX,INF);
		    pq.push(ii(0,s));
				dist[s] = 0;

				while(!pq.empty()){

						ii front = pq.top();pq.pop();

						int d = front.first;
						int u = front.second;

						if(d > dist[u]) continue;

						if(rotas[u] == 1){

										for(auto v : rota[u]){

														if(dist[u] + v.second < dist[v.first]){

																		dist[v.first] = dist[u] + v.second;
																		pq.push(ii(dist[v.first], v.first));

														}

										}


						}else{

										for(auto v : vetorzao[u]){

														if(dist[u] + v.second < dist[v.first]){

																		dist[v.first] = dist[u] + v.second;
																		pq.push(ii(dist[v.first], v.first));

														}

										}

						}

				}

}

int main(){

		int n,m,c,k;

		while(scanf("%d %d %d %d",&n,&m,&c,&k),n|m|c|k){

						memset(rotas,0,sizeof rotas);

						for(int i = 0;i < m;++i){
										int a,b,d;

										scanf("%d %d %d",&a,&b,&d);

										vetorzao[a].push_back(ii(b,d));
										vetorzao[b].push_back(ii(a,d));

										int menor = min(a,b);
										int maior = max(a,b);

										if(maior == (menor + 1) && maior < c){
												rota[maior].push_back(ii(menor,d));
												rota[menor].push_back(ii(maior,d));

												rotas[maior] = 1;
												rotas[menor] = 1;
										}
						}



						digs(k);

						printf("%d\n",dist[c-1]);


						for(int f = 0;f<=n;++f){

								vetorzao[f].clear();
								rota[f].clear();
						}

						//for(int i = 0; i < c;++i){
							//	int tamanho = (int) rota[i].size();
							//	printf("Tamanho %d  ",tamanho);
							//	for(int t = 0;t < tamanho;++t){
							//	printf(" (cidade %d distancia %d) \n",rota[i][t].first,rota[i][t].second);
							//	}
							//	printf("\n");
						//}
		}



			return 0;
}
