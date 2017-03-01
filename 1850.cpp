#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <bitset>
#define INF 1 << 30
#define mp(w,x,y,z) make_pair(make_pair(w,x), make_pair(y,z))

using namespace std;
using ii = pair<int,int>;
using iii = pair<ii, int>;
using iiii = pair<ii,ii>;

const ii us[] { ii(0,1), ii(0,-1), ii(1,0), ii(-1,0) };

int main(){
				string s;
				char grid[200][200];
				int tam, idx = 1;
				ii arya, out;

				while(cin >> s){
								tam = s.size();

								for(int i=1;i<=tam;i++){
												grid[idx][i] = s[i-1];
												if(s[i-1] == '@') arya = ii(idx,i);
												if(s[i-1] == '*') out = ii(idx,i);
								}
								idx++;
				}

				int visited[110][110][150];
				memset(visited, -1, sizeof visited);
				queue<iiii> q;
				int res;

				q.push(mp(arya.first, arya.second, 0, 0));

				while(not q.empty()){
								iiii cur = q.front(); q.pop();
								int x = cur.first.first;
								int y = cur.first.second;
								int mask = cur.second.first;
								int dist = cur.second.second;

								if(x == out.first && y == out.second){
												res = dist;
												break;
								}

								if(x < 1 || x >= idx || y < 1 || y > tam) continue;        
								if(grid[x][y] == '#') continue;

								char c = grid[x][y];
								int nc = (int)tolower(c); nc -= 97;

								if(isupper(c) && !(mask & (1 << nc))) continue;

								if(visited[x][y][mask] == 1) continue;

								visited[x][y][mask] = 1;

								if(islower(c)) mask |= (1 << nc);

								for(auto pt : us){
												int tox = x + pt.first;
												int toy = y + pt.second;
												q.push(mp(tox, toy, mask, dist + 1));
								}
				}

				if(res == 0)
								cout << "--" << endl;
				else
								cout << res << endl;

				return 0;
}
