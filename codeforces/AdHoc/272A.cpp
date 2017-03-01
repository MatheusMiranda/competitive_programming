#include <iostream>

using namespace std;

int main(){

  int n,s,a;
  cin >> n;
  s = n;
  long long cont = 0;
  int m = 0;
  
  while(n--){
    cin >> a;cont += a;
  }  

  for(int i = 1;i <= 5;++i){
    if((cont + i) % (s+1) == 1){
      m++;
    }  
  }

  cout << 5 - m << endl;

  return 0;
}
