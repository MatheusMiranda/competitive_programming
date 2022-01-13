#include <iostream>
#include <vector>

using namespace std;
using par = pair<int,int>;

char matrizona[110][110];
par us[] {par(1,0),par(-1,0),par(0,1),par(0,-1),par(-1,1),par(1,1),par(1,-1),par(-1,-1)};

int m,n;

void dfs(int i, int j){

  matrizona[i][j] = '*';

  for(auto el : us){
    int novoi = i + el.first;
    int novoj = j + el.second;

    if(novoi < 1 || novoj < 1 || novoi > m || novoj > n) continue;

    if(matrizona[novoi][novoj] == '@'){
      dfs(novoi,novoj);
    }  
  }  
}  

int main(){

  while(scanf("%d %d",&m,&n),m | n){

    for(int i = 1;i<=m;++i)
      for(int j = 1;j<= n;++j)
        cin >> matrizona[i][j];

    int cont = 0;

    for(int i = 1;i <= m;++i){
      for(int j = 1;j <= n;++j){ 
        if(matrizona[i][j] == '@'){
          cont++;
          dfs(i,j);
        } 
      }
    }


    cout << cont << endl;
  }
  return 0;
}
