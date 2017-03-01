#include <iostream>
#include <cstring>
#include <vector>
#include <stack>

using namespace std;

#define MAX 2010

vector<int> adj[MAX];
int visited[MAX];
int dfs_low[MAX];
int dfs_num[MAX];
int count = 0;
int round = 1;
int numSCC = 0;
stack<int> s;

void sccCounter(int u){

		dfs_low[u] = dfs_num[u] = round++;
		s.push(u);
		visited[u] = 1;

		for(auto v : adj[u]){

				if (dfs_num[v] == 0)
								sccCounter(v);
				if (visited[v])
								dfs_low[u] = min(dfs_low[u], dfs_low[v]);

		}

		if (dfs_low[u] == dfs_num[u]) {// if this is a root (start) of an SCC

						numSCC++;

						//	printf("SCC %d:", ++numSCC);
						 while (1) {

								 int l = s.top(); s.pop();visited[l] = 0;
								// printf(" %d", l);

							  	if (u == l) break;

						 }

			//		 	printf("\n");
		 }



}

int main(){

		int n,m;

		while(scanf("%d %d",&n,&m),m | n){

				memset(visited,0,sizeof visited);
				memset(dfs_low,0,sizeof dfs_low);
				memset(dfs_num,0,sizeof dfs_num);

				int v,w,p;

				for(int i = 0;i < m;++i){

							scanf("%d %d %d",&v,&w,&p);

							if(p == 1){
									adj[v].push_back(w);
							}else if(p == 2){
									adj[v].push_back(w);
									adj[w].push_back(v);
							}

				}


				for(int i = 1;i <= n;++i){

							if(dfs_num[i] == 0){

									sccCounter(i);

							}

				}



				if(numSCC>1){
						printf("0\n");
				}
				else if(numSCC == 1){
						printf("1\n");
				}

				round = 1;
				count = 0;
				numSCC = 0;

				for(int i = 1;i<= n;++i){

								adj[i].clear();

				}

				while(!s.empty()){
								s.pop();
				}

		}

		return 0;

}
