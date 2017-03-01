#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <cstdio>
#include <algorithm>

using namespace std;

#define MAX 100000

using ii = pair<int,int>;

vector<int> adj[MAX];
vector<ii> respbridges;
int bridges;
int discov;
int dfs_low[MAX];
int dfs_num[MAX];
int parent[MAX];

bool my_function(ii p1,ii p2){

			if(p1.first == p2.first){

						return p1.second < p2.second;

			}

			return p1.first < p2.first;

}

void findBridges(int u){

		dfs_low[u] = dfs_num[u] = discov++;

		for(auto v : adj[u]){

				if(dfs_num[v] == -1){
								parent[v] = u;

								findBridges(v);

								if (dfs_low[v] > dfs_num[u]){
											respbridges.push_back(ii(min(u,v),max(u,v)));
											bridges++;
								}

								dfs_low[u] = min(dfs_low[u], dfs_low[v]);
				}else if(v != parent[u]){
							dfs_low[u] = min(dfs_low[u], dfs_num[v]); // update dfs_low[u]
				}

		}


}

int main(){

		int nofserv;

		while(scanf("%d",&nofserv) != EOF){

				discov = 0;
				bridges = 0;

				memset(dfs_low,0,sizeof dfs_low);
				memset(dfs_num,-1,sizeof dfs_num);
				memset(parent,0,sizeof parent);

				int origem,nos,no;

				for(int i = 0;i < nofserv;++i){

							scanf("%d (%d)",&origem,&nos);

							for(int k = 0;k < nos;++k){

									scanf("%d",&no);
									adj[origem].push_back(no);

							}

				}

				for(int h = 0;h < nofserv;++h){

						if(dfs_num[h] == -1){

								findBridges(h);
						}
				}

				printf("%d critical links\n",bridges);

				sort(respbridges.begin(),respbridges.end(),my_function);

				for(int d = 0;d < (int)respbridges.size();++d){

							printf("%d - %d\n",respbridges[d].first,respbridges[d].second);

				}
				printf("\n");

				respbridges.clear();

				for(int t = 0;t <= nofserv;++t){
						adj[t].clear();
				}

		}

		return 0;

}
