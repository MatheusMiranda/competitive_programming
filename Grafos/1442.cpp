#include <iostream>
#include <vector>
#include <stack>
#include <cstring>

using namespace std;

#define MAX 1020

vector<int> adj[MAX];
int visited[MAX];
int dfs_low[MAX];
int dfs_num[MAX];
int count = 0;
int round = 1;
int numSCC = 0;
stack<int> s;

int main(){
	
		int n,m;
		while(scanf("%d %d",&n,&m) != EOF){

					int x,y,z;

					for(int i = 0;i < m;++i){

								scanf("%d %d %d",&x,&y,&z);

								if(z == 1){
										adj[x].push_back(y);
								}else if(z == 2){
										adj[x].push_back(y);
										adj[y].push_back(x);
								}
				
					}

					



		return 0;
}
