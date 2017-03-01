#include <iostream>
#include <string>

using namespace std;

int func(string p1,string p2){
  
  int m = p1.size();
  int n = p2.size();

  int matrizona[m+1][n+1];

  for(int i = 0;i<=m;++i){
    for(int j = 0;j<=n;++j){

      if(i == 0 || j == 0)matrizona[i][j] = 0;
      
      else if(p1[i-1] == p2[j-1]) matrizona[i][j] = 1 + matrizona[i-1][j-1];

      else matrizona[i][j] = max(matrizona[i-1][j],matrizona[i][j-1]);
    }
  }
  return matrizona[m][n];
}  

int main(){

  string linha,linha2;

  while(getline(cin,linha)){
     getline(cin,linha2);

     cout << func(linha,linha2) << endl;
     
  }
}
