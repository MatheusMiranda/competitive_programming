#include <bits/stdc++.h>

using namespace std;

using ii = pair <int, int>;

#define MAX 1010
#define INF 1000000000

list <ii> adj[MAX];
int dist[MAX];

bool negative_cycle(int n){
	for(int i=0; i<n; i++)
		dist[i]=INF;

	dist[0]=0;
	for(int i=0; i<n-1; i++){
		for(int u=0; u<n; u++){
			for(auto p : adj[u]){
				int v=p.first;
				int w=p.second;

				dist[v]=min(dist[v], dist[u]+w);
			}
		}
	}

	for(int u=0; u<n; u++){
		for(auto p : adj[u]){
			int v=p.first;
			int w=p.second;

			if(dist[v]>dist[u]+w)
				return true;
		}
	}


	return false;
}

int main(){
	int T;
	cin >> T;

	while(T--){
		int n, m;

		for(int i=0; i<MAX; i++)
			adj[i].clear();

		cin >> n >> m;

		while(m--){
			int u, v, t;

			cin >> u >> v >> t;

			adj[u].push_back(ii(v, t));
		}

		cout << (negative_cycle(n) ? "possible" : "not possible") << endl;
	}

	return 0;
}
