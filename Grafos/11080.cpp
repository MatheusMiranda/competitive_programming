#include <iostream>
#include <cstring>
#include <vector>
#include <queue>

using namespace std;

#define MAX 210

vector<int> adj;
int colors[MAX];
bool bicolorable = true;
int guards = 0;
queue<int> q;

dfs(int u,int color){

			colors[u] = color;
			if(color == 0) guards++;

			for(auto v : adj[u]){

					if(cores[v] == -1){
								dfs(v,1 - color);
					}
									
			}						

}

int main(){

		int T;

		scanf("%d",&T);

		for(int i = 0;i < T;++i){
			
				memset(cores,-1,sizeof cores);
				memset(visitados,0,sizeof visitados);

				int v,e;
				scanf("%d %d",&v,&e);

				int origin,destiny;

				for(int j = 0;j < e;++j){

						scanf("%d %d",&origin,&destiny);
						adj[origin].push_back(destiny);
						adj[destiny].push_back(origin);
												
				}
				
				dfs(0,0);
				
				printf("%d")
		

		}



		return 0;
}
