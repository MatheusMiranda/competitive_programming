#include <bits/stdc++.h>

using namespace std;

unsigned long long fib[83];

int main(){
  fib[0] = 1;
  fib[1] = 1;
  
  for(int i = 2;i <= 80;++i){
    fib[i] = fib[i-1] + fib[i-2];
  }
  
  int a;
  while(cin >> a,a){
    cout << fib[a] << endl;
  }

  return 0;
}
