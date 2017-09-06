#include <bits/stdc++.h>

using namespace std;

typedef pair <int, int> ii;

map <int, list <int> > adj;

int bfs(int s, int ttl){
	set <int> reachable;
	queue <ii> q;

	q.push(ii(s, ttl));
	reachable.insert(s);

	while(!q.empty()){
		while(not q.empty()){
			auto p=q.front();
			q.pop();

			int u=p.first;
			int t=p.second;

			if(t==0)
				continue;

			for(auto v : adj[u]){
				if(reachable.count(v)==0){
					reachable.insert(v);
					q.push(ii(v, t-1));
				}
			}
		}
	}

	int nodes=0;
	for(auto p : adj){
		int u=p.first;
		if(reachable.count(u)==0)
			nodes++;
	}

	return nodes;
}

int main(){
	int nc, u, v, s, ttl, testcase=0;	

	while(cin >> nc && nc){
		adj.clear();
		while(nc--){
			cin >> u >> v;

			adj[u].push_back(v);
			adj[v].push_back(u);
		}

		while(cin >> s >> ttl && (s || ttl)){
			testcase++;

			int nodes=bfs(s, ttl);
			
			printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", testcase, nodes, s, ttl);

		}
	}

	return 0;
}
