#include <bits/stdc++.h>

#define MAX 110

using namespace std;
using ll = long long;
ll binom[MAX][MAX];  

void precomp(){
  for(ll i = 0;i < MAX;++i){
    binom[i][0] = binom[i][i] = 1;

    for (ll j = 1; j < i; ++j)
            binom[i][j] = binom[i - 1][j] + binom[i - 1][j - 1];
  }
}

int main(){
  ll a,b;
  
  precomp(); 
 
  while(cin >> a >> b,a|b){  
    cout << a << " things taken " << b << " at a time is " << binom[a][b] << " exactly." << endl;
  }
  
  return 0;
}
