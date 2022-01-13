#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll sum(ll n){
  return ( n* (n + 1))/2;
}

bool check(ll x, ll val){
  if(x % 2 == 0){
    if(val % 2 == 0) return true;
    else return false;
  }else{
    if(val % 2 != 0) return true;
    else return false;
  }
}


int main(){
  ll n,a;
  scanf("%lld",&a);
  int contador = 0;

  while(a--){
    scanf("%lld",&n);

    if(n < 0) n*=-1;
    ll res = 0;
    ll soma = 0;

    while(soma < n || !check(n,soma)){
      res++;
      soma = sum(res);
    }
    
    if(n == 0) res = 3;
    if(contador++) printf("\n");
    printf("%lld\n",res);
  }
 
  return 0;
}
