#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
  ll n,t,c;

  cin >> n >> t >> c;

  ll cont = 0;
  ll total = 0,a;
  while(n--){
    cin >> a;
    if(a > t){
      if(cont >= c){
        total += ((cont-c) + 1);
      }
      cont = 0;
      continue;
    }
    cont++;
  }
  if(cont >= c){
    total += ((cont-c) + 1);
  }

  cout << total << endl;

  return 0;
}
