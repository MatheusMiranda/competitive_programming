#include <bits/stdc++.h>

using namespace std;

#define INF 1<<30

typedef pair <int, int> ii;
typedef pair <int, ii> iii;

int grid[1010][1010];
unsigned dist[1010][1010];

int djikstra(int N, int M){
	priority_queue < iii, vector <iii>, greater <iii> > pq;

	memset(dist, -1, sizeof(dist));
	dist[1][1]=0;

	pq.push(iii(0, ii(1, 1)));
	while(!pq.empty()){
		auto p = pq.top();
		pq.pop();

		unsigned d=p.first;
		int x=p.second.first, y=p.second.second;

		if(d>dist[x][y])
			continue;

		for(int i=-1; i<=1; i+=2){
			if(grid[x+i][y]!=-1 and dist[x][y]+grid[x+i][y]<dist[x+i][y]){
				dist[x+i][y]=dist[x][y]+grid[x+i][y];
				pq.push(iii(dist[x+i][y], ii(x+i, y)));
			}
		}

		for(int i=-1; i<=1; i+=2){
			if(grid[x][y+i]!=-1 and dist[x][y]+grid[x][y+i]<dist[x][y+i]){
				dist[x][y+i]=dist[x][y]+grid[x][y+i];
				pq.push(iii(dist[x][y+i], ii(x, y+i)));
			}
		}

	}

	return dist[N][M];
}

int main(){
	int t, n, m;

	cin >> t;


	while(t--){
		cin >> n >> m;

		memset(grid, -1, sizeof(grid));
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				cin >> grid[i][j];
			}
		}

		printf("%d\n", djikstra(n, m)+grid[1][1]);
	}

	return 0;
}
