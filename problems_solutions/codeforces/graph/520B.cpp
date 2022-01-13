#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, m;

  cin >> n >> m;

  int cont = 0;

  if(n == m) cout << 0 << endl;
  else if(n > m) cout << n - m << endl;
  else{
    while(1){
      if(m > n){
        if(m % 2 == 0){
          m /= 2;
          cont++;
        }else{
          m++;
          m /= 2;
          cont += 2;
        } 
      }else if(m < n){
        cont += abs(m - n);
        m = n;
      }

      if(m == n){
        cout << cont << endl;
        break;
      }
    }
  }

  return 0;
}
