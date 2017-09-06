#include <iostream>
#include <cstring>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

#define MAX 110

vector<int> adj[MAX];
int dfs_low[MAX];
int dfs_num[MAX];
int parent[MAX];
int articulation[MAX];
int round;
int count;
int dfs_root;
int root_child;

void findPoints(int u){

		dfs_low[u] = dfs_num[u] = round++;

		for(auto v : adj[u]){

				if(dfs_num[v] == -1){

						parent[v] = u;

						if(u == dfs_root) root_child++;

						findPoints(v);

						if (dfs_low[v] >= dfs_num[u]){
										articulation[u] = 1;
						}
										//count++;
									//printf("O ponto %d eh articulacao",u);


						dfs_low[u] = min(dfs_low[u], dfs_low[v]);
				}else if(v != parent[u]){
						dfs_low[u] = min(dfs_low[u], dfs_num[v]);
				}

		}
	

}

int main(){

		int n;
		string linha;

		while(scanf("%d",&n),n){

				memset(dfs_low,0,sizeof dfs_low);
				memset(dfs_num,-1,sizeof dfs_num);
				memset(parent,0,sizeof parent);
				memset(articulation,0,sizeof articulation);

				round = 0;
				count = 0;

				int origin,destiny;

				while(scanf("%d",&origin),origin){

							getline(cin,linha);
							stringstream ss(linha);
							while(ss >> destiny){
											adj[origin].push_back(destiny);
											adj[destiny].push_back(origin);
							}

				}

				/*for(int i = 1;i <= n;++i){
						printf("Vetor %d: ",i);
						for(auto it : adj[i]){

								printf("%d ",it);

						}
						printf("\n");
				}*/

				for(int l = 1;l <= n;++l){

						if(dfs_num[l] == -1){
										dfs_root = l;
										root_child = 0;
										findPoints(l);

										articulation[l] = (root_child > 1);

						}


				}

				for(int t = 1;t<=n;++t){

						if(articulation[t] == 1){
										count++;
						}

				}

				printf("%d\n",count);

				for(int j = 1;j <= n;++j){
						adj[j].clear();
				}

		}

		return 0;
}
