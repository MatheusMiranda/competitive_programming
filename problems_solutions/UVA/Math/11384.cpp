#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
  ll n;
  ll resp;
  
  while(cin >> n){
    resp = 0;
    while(n >>= 1) resp++;
    cout << resp + 1 << endl;
  }
  
  return 0;
}
