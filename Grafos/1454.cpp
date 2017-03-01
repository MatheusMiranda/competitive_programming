#include <iostream>
#include <vector>
#include <cstring>
#include <queue>

#define MAX 110
#define INF 500000000

using namespace std;
using ii = pair<int,int>;
using vi = vector<int>;

vector<ii> vetorzao[MAX];
priority_queue<ii,vector<ii>,greater<ii> > pq;
vi dist;
int pai[MAX];
int maior = -400;
int ori,dest;
int matrizona[MAX][MAX];

void acha_maior(int partida,int chegada){

		if(partida == ori) return;
		
		if(matrizona[partida][chegada] > maior){
				maior = matrizona[partida][chegada];
		}		

		acha_maior(chegada,pai[chegada]);
		
}

void digs(int s,int n){

		dist.assign(n + 1,INF);
		pq.push(ii(0,s));
		dist[s] = 0;

		while(!pq.empty()){

				ii front = pq.top();pq.pop();	
		
				int d = front.first;
				int u = front.second;

				if(d > dist[u]) return;
				
				for(auto v : vetorzao[u]){

								if(dist[u] + v.second < dist[v.first]){
												pai[v.first] = u;
												dist[v.first] = dist[u] + v.second;
												pq.push(ii(dist[v.first], v.first));
								}

				}		

		}


}				

int main(){

		int n,m,a,b,alt;
		int teste = 1;

		while(scanf("%d %d",&n,&m),m | n){
						
						for(int r = 0;r < m;++r){		

										scanf("%d %d %d",&a,&b,&alt);

										vetorzao[a].push_back(ii(b,alt));
										vetorzao[b].push_back(ii(a,alt));
										
										matrizona[a][b] = alt;
										matrizona[b][a] = alt;
						}


						int k;
						scanf("%d",&k);

						printf("Instancia %d\n",teste);

						for(int l = 0;l < k;++l){

										memset(pai,0,sizeof pai);
										scanf("%d %d",&ori,&dest);

										digs(ori,n);

										for(int e = 1;e <= n;++e){
												printf("O pai de %d eh %d\n",e,pai[e]);
										}					
										
										acha_maior(dest,pai[dest]);

										printf("%d\n",maior);

										maior = -400;
				
						}


		}
	
		return 0;
}
				
