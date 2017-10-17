#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;

int main(){
  ll n,k;

  while(cin >> n >> k){
    double sum = 0;

    if(k > n - k){
      for(ll i = k + 1;i <= n;++i){
        sum += log10(i) - log10(n - i + 1);
      }
    }else{
      for(ll i = n - k + 1;i <= n; ++i){
        sum += log10(i) - log10(n - i + 1);
      }
    }

    sum = floor(sum) + 1;
    printf("%0.lf\n",sum);
  } 


  return 0;
}
