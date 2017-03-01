#include <iostream>

using namespace std;
using par = pair<int,int>;

char matrizona[6][6];

par us[] {par(1,0),par(0,1),par(-1,0),par(0,-1),par(1,1),par(1,-1),par(-1,1),par(-1,-1)};

int main(){

  for(int i = 1;i <= 4;++i)
    for(int j = 1;j <= 4;++j)
      cin >> matrizona[i][j];

  int flag = 0;
  int contx, contpt;

  for(int i = 1;i <= 4;++i){
    for(int j = 1;j <= 4;++j){
      contx = 0;
      contpt = 0;

      for(auto el: us){
        int ni = i + el.first;
        int nj = j + el.second;

        if(ni < 1 || nj < 1 || ni > 4 || nj > 4) continue;

        if(matrizona[ni][nj] == 'x') contx++;
        if(matrizona[ni][nj] == '.') contpt++;

      }

      if(matrizona[i][j] == 'x'){
        if(contx > 0 && contpt > 0){
          flag = 1;
          break;
        }
      }else if(matrizona[i][j] == '.'){
        if(contx > 1){
            flag = 1;
            break;
        }  
      } 

    }  
  }

  if(flag) printf("YES\n");
  else printf("NO\n");

  return 0;
}
