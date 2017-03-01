#include <iostream>
#include <string>

using namespace std;

int matrizona[52][52];

int func(string p1,string p2){
  int m = p1.size();
  int n = p2.size();

  int maior = 0;

  for(int i = 0; i <= m;++i){
    for(int j = 0; j <= n;++j){
        if(i == 0 || j == 0) matrizona[i][j] = 0;

        else if(p1[i - 1] == p2[j-1]){
          matrizona[i][j] = 1 + matrizona[i-1][j-1];
          maior = max(maior,matrizona[i][j]);
        }
        else matrizona[i][j] = 0;
     }
  }

  return maior;

}

int main(){
  
  string p1,p2;

  while(getline(cin,p1)){
    
    getline(cin,p2);

    cout << func(p1,p2) << endl; 
    
  }

  return 0;
}
