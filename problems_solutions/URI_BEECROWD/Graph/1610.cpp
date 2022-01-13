#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > v;
vector<int> visited;
bool has_cicle;

void dfs(int i) {
    if (has_cicle)
        return;

    visited[i] = 1;

    for (auto dep : v[i]) {
        if (visited[dep] == 1) {
           has_cicle = 1;
           return;
        } else if(visited[dep] == 0) {
           dfs(dep);
        }
    }

    visited[i] = 2;
}

int main(){
    int c;
    cin >> c;
    int n, m;

    while(c--){
        cin >> n >> m;
        v.assign(n, vector<int> ());
        has_cicle = 0;
        visited.assign(n,0);

        int a, b;
        for (int i = 0; i < m; i++) {
            cin >> a >> b;
            v[a - 1].push_back(b - 1);
        }

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                dfs(i); 
            }
            if (has_cicle) {
                break;
            }
        }

        if (has_cicle) {
            cout << "SIM" << endl;
        } else {
            cout << "NAO" << endl;
        }
    }

    return 0;
}
