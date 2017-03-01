#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

typedef pair <int, int> ii;
typedef pair <int, ii> iii;

char grid[1010][1010];
unsigned dist[1010][1010];

ii comeco,fim;

int toInt(char c) {
				return isdigit(c) ? c - 48 : 0;
}

void djikstra(int N, int M){
				priority_queue < iii, vector <iii>, greater <iii> > pq;

				memset(dist, -1, sizeof(dist));
				dist[N][M]=0;

				pq.push(iii(0, ii(N, M)));
				while(!pq.empty()){
								auto p = pq.top();
								pq.pop();

								unsigned d=p.first;
								int x=p.second.first, y=p.second.second;

								if(d>dist[x][y])
												continue;

								for(int i=-1; i<=1; i+=2){
												if(grid[x+i][y] == 'E'){
														if(dist[x+i][y] > dist[x][y]){
															dist[x+i][y] = dist[x][y];
														}
														continue;
												}
												if( grid[x+i][y]!='#' and  grid[x+i][y]!='H' and grid[x+i][y]!=-1 and dist[x][y]+grid[x+i][y]<dist[x+i][y]){
																dist[x+i][y]=dist[x][y]+toInt(grid[x+i][y]);
																pq.push(iii(dist[x+i][y], ii(x+i, y)));
												}
								}

								for(int i=-1; i<=1; i+=2){
												if(grid[x][y+i] == 'E'){
														if(dist[x][y+i] > dist[x][y]){
															dist[x][y+i] = dist[x][y];
														}
														continue;
												}
												if(grid[x][y + i]!='#' and grid[x][y + i]!='H' and grid[x][y+i]!=-1 and dist[x][y]+grid[x][y+i]<dist[x][y+i]){
																dist[x][y+i]=dist[x][y]+ toInt(grid[x][y+i]);
																pq.push(iii(dist[x][y+i], ii(x, y+i)));
												}
								}

				}

}

int main(){
				int n, m;

				cin >> n >> m;

				memset(grid, -1, sizeof(grid));
				for(int i=1; i<=n; i++){
								for(int j=1; j<=m; j++){
												cin >> grid[i][j];
												if(grid[i][j] == 'H'){
																comeco = make_pair(i,j);
												}
												else if(grid[i][j] == 'E'){
																fim = make_pair(i,j);
												}else if(grid[i][j] == '.'){
																grid[i][j] = '0';
												}
								}
				}

				djikstra(comeco.first,comeco.second);

				if(dist[fim.first][fim.second] != -1){
					printf("%d\n",dist[fim.first][fim.second]);
				}else{
					printf("ARTSKJID\n");
				}
				return 0;
}

