#include <bits/stdc++.h>

using namespace std;
using par = pair<int,int>;
vector<pair<int,int> > viz = {par(0,1), par(1,0),par(-1,0),par(0,-1)};

map<char, pair<int,int> > dic = {
  {'a', par(0,0)},
  {'b', par(0,1)},
  {'c', par(0,2)},
  {'d', par(1,0)},
  {'e', par(1,1)},
  {'f', par(1,2)},
  {'g', par(2,0)},
  {'h', par(2,1)},
  {'i', par(2,2)}
};

int main(){
  string a;
  int caso = 0;
  int mat[3][3];
  while(getline(cin,a)){
    memset(mat, 0, sizeof mat);
    cout << "Case #" << ++caso << ":\n";
    
    for(auto el : a){
      int x = dic[el].first;
      int y = dic[el].second;
      
      mat[x][y] = (mat[x][y] + 1);
      for(auto el : viz){
        int nx = x + el.first;
        int ny = y + el.second;

        if(nx < 0 or ny < 0 or nx > 2 or ny > 2) continue;
        
        mat[nx][ny] = (mat[nx][ny] + 1);
        
      }
    }
  
    for(int i = 0;i < 3;++i){
      for(int j = 0;j < 3;++j){
        if(!j)cout << mat[i][j] % 10;
        else cout << " " << mat[i][j] % 10;
      }
      cout << endl;
    }

  }

  return 0;
}
