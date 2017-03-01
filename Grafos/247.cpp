#include <iostream>
#include <cstring>
#include <stack>
#include <vector>
#include <string>
#include <map>

using namespace std;

#define MAX 30

vector<int> adj[MAX];
int dfs_low[MAX];
int dfs_num[MAX];
int visited[MAX];
int count;
map<string,int> dic;
map<int,string> rev;
int stringNum;
int discov;
stack<int> s;
vector<string> resp;
int call[MAX][MAX];

void sccDiscover(int u){

			dfs_low[u] = dfs_num[u] = discov++;		
			visited[u] = 1;	
			s.push(u);

			for(auto v : adj[u]){

							if (dfs_num[v] == 0)
											sccDiscover(v);
							if (visited[v])
											dfs_low[u] = min(dfs_low[u], dfs_low[v]);

			}
			if (dfs_low[u] == dfs_num[u]) {
				
							
						int a = -1;	
						while(a != u){

										a = s.top();s.pop();visited[a] = 0;
										resp.push_back(rev[a]);
										//printf("%s ",rev[a].c_str());	

						}
								resp.push_back("break");
								//printf("\n");

			}					
}

int main(){

		int n,m,n1,n2;
		count = 1;

		while(scanf("%d %d",&n,&m),n | m){
	
						memset(visited,0,sizeof visited);
						memset(dfs_low,0,sizeof dfs_low);
						memset(dfs_num,0,sizeof dfs_num);
						memset(call,0,sizeof call);

						for(int w = 0;w < MAX;++w){

								for(int x = 0;x < MAX;++x){
										call[w][x] = 0;
								}				

						}

						discov = 1;
						stringNum = 1;

						string palavra1,palavra2;
				
						for(int i = 0;i < m;++i){

									cin >> palavra1 >> palavra2;
									
									if(!dic[palavra1]){
											
											dic[palavra1] = stringNum;			
											rev[stringNum] = palavra1;
											stringNum++;

									}
									if(!dic[palavra2]){

											dic[palavra2] = stringNum;
											rev[stringNum] = palavra2;			
											stringNum++;

									}
														
									n1 = dic[palavra1];
									n2 = dic[palavra2];
								
									if(call[n1][n2] == 0){
											adj[n1].push_back(n2);
											call[n1][n2] = 1; 
									}
											
						}

						for(int r = 1;r <= n;++r){

									if(dfs_num[r] == 0){
											sccDiscover(r);											
									}				

						}	

					printf("Calling circles for data set %d:\n",count);
					count++;

					int comma = 0;

					for(int q = (int)resp.size() - 2;q >= 0;--q){
														
							if(resp[q] == "break"){
									comma = 0;
									printf("\n");
							}else{				
											
							    if(comma++>0)printf(", ");
									printf("%s",resp[q].c_str());
							}


					}		

					printf("\n\n");		
					
					for(int e = 1;e <= n;++e){
							adj[e].clear();
					}			

					resp.clear();
					dic.clear();	
					rev.clear();
		}

		return 0;
}
