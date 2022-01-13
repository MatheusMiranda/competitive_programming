#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

  ll a,b;

  while(cin >> a){
    ll linha = (a + 1) /2;
    ll sum = (2 * (linha * linha) - 1) + (2 * (linha * linha) - 3) + (2 * (linha * linha) - 5);
    cout << sum << endl;
  }

  return 0;
}
