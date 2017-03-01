#include <iostream>
#include <queue>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

#define MAX 55

int bridges = 0;
int round = 1;
int dfs_low[MAX];
int dfs_num[MAX];
int visited[MAX];
vector<int> adj_list[MAX];
int parent[MAX];

void findBridges(int u){

		dfs_low[u] = dfs_num[u] = round++;
		visited[u] = 1;

		for(auto v : adj_list[u]){

				if(visited[v] == 0){

						parent[v] = u;
						//if (u == dfsRoot) rootChildren++;

						findBridges(v);

						if (dfs_low[v] > dfs_num[u])
								bridges++;
								//printf Edge de u para v eh uma ponte

						dfs_low[u] = min(dfs_low[u], dfs_low[v]);

				}
				else if (v != parent[u]) // a back edge and not direct cycle
								dfs_low[u] = min(dfs_low[u], dfs_num[v]); // update dfs_low[u]


		}

}

int main(){

		int c,p;

		while(scanf("%d %d",&c,&p) != EOF){

				int x,y;
				memset(dfs_low,0,sizeof dfs_low);
				memset(dfs_num,0,sizeof dfs_num);
				memset(visited,0,sizeof visited);
				memset(parent,0,sizeof parent);

				for(int i = 0;i< p;++i){

							scanf("%d %d",&x,&y);
							adj_list[x].push_back(y);
              adj_list[y].push_back(x);

				}


				for(int i = 1;i <= c;++i){

							if(visited[i] == 0){

										findBridges(i);

							}
				}

				printf("%d\n",bridges);


				for(int i = 1;i <= c;++i){

						adj_list[i].clear();

				}
				round = 1;
				bridges = 0;

		}



		return 0;

}
