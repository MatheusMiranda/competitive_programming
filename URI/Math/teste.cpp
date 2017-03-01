#include <iostream>

using namespace std;

long long mod = 13371337;

void teste(int m[2][2]){
  
  long long x1 = (m[0][0] * m[0][0]) + (m[0][1] * m[1][0]);
  long long x2 = (m[0][0] * m[0][1]) + (m[0][1] * m[1][1]);
  long long x3 = (m[1][0] * m[0][0]) + (m[1][1] * m[1][0]);
  long long x4 = (m[1][0] * m[0][1]) + (m[1][1] * m[1][1]);

  m[0][0] = x1 % mod;
  m[0][1] = x2 % mod;
  m[1][0] = x3 % mod;
  m[1][1] = x4 % mod;    

}

int main(){

  int matrizona[2][2] = {{1,2},{1,2}};  

  teste(matrizona);
  
  for(int i = 0;i < 2;++i){
    for(int j =0;j < 2;++j){
      cout << " " <<  matrizona[i][j];
    }
    cout << endl;
  }

  return 0;
}
