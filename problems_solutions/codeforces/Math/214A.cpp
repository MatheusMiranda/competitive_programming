#include <iostream>

using namespace std;

int main(){

  int n,m;
  cin >> n >> m;
  int cont = 0;

  for(int i = 0;i <= 3000;++i){
    for(int j = 0;j <= 3000;++j){
        if(i * i + j == n && i + j * j == m) cont++;
    }
  }
      

  cout << cont << endl;

  return 0;
}
