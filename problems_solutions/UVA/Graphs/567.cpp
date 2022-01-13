#include <iostream>
#include <queue>
#include <vector>

using namespace std;
using vi = vector<int>;

#define MAX 30
#define INF 300000000

vector<int> vetorzao[MAX];
vi dist;
queue<int> q;
int flag = 1;
int set = 1;

int main(){

		int destiny,qt;

		while(1){

						for(int i = 1;i < 20;i++){

										if(scanf("%d",&qt) == EOF){
														flag = 0;
														break;

										}

										for(int j = 0;j<qt;++j){

														scanf("%d",&destiny);

														vetorzao[i].push_back(destiny);
														vetorzao[destiny].push_back(i);

										}

						}

						if(flag == 0){
									flag = 1;
									break;
						}


						int conq,ori,dest;

						scanf("%d",&conq);

						printf("Test Set #%d\n",set);

						for(int k = 0;k<conq;++k){

										dist.assign(MAX,INF);

										scanf("%d %d",&ori,&dest);

										dist[ori] = 0;
										q.push(ori);

										while(!q.empty()){

														int u = q.front();q.pop();

														for(int a = 0;a < (int)vetorzao[u].size();++a){

																		int node = vetorzao[u][a];

																		if(dist[node] == INF){
																						dist[node] = dist[u] + 1;
																						q.push(node);
																		}
														}

										}

										printf("%2d to %2d: %d\n",ori,dest,dist[dest]);

						}

						printf("\n");
						set++;

						for(int e = 0;e< MAX;++e){
							vetorzao[e].clear();
						}

		}

	return 0;
}
