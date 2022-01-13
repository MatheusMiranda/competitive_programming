#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
  ll prod = 1;
  for(int a = 1; a < 1000;++a)
    for(int b = 1; b < 1000;++b)
      for(int c = 1;c < 1000;++c){
        if(a * a + b * b == c * c){
          if(a + b + c == 1000){
            cout << a << " " << b << " " << c << endl;
            cout << a * b * c << endl;
          }
        }
      }

  return 0;
}
