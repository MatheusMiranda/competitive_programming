#include <iostream>
#include <vector>

using namespace std;
using ii = pair<int,int>;

ii us[]{ii(1,0),ii(0,1),ii(-1,0),ii(0,-1)};
char matrizona[110][110];
char tipo[2];

int n,m;
void dfs(int x,int y,int num){
     
    int nx,ny;
    for(auto el : us){
      nx = x + el.first;
      ny = y + el.second;

      if(nx < 1 || nx > n || ny < 1 || ny > m)continue;

      if(matrizona[nx][ny] != '-'){
        matrizona[nx][ny] = tipo[num];
      }
      dfs(nx,ny,1 - num);
    }  
}  

int main(){

  tipo[0] = 'B';
  tipo[1] = 'W';

  cin >> n >> m;

  for(int i = 1;i <=n;++i)
    for(int j = 1;j <=m;++j)
       cin >> matrizona[i][j];
  
  dfs(1,1,0);        

  for(int i = 1;i <=n;++i)
    for(int j = 1;j <=m;++j)
       cout << matrizona[i][j];

  return 0;
}
