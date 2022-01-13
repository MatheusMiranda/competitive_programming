#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;
#define MAX 1000001

bitset<MAX> primes;
vector<ll> ps;

void sieve(){
  primes.set();
  primes[1] = false;
  primes[2] = true;

  ps.push_back(2);

  for(ll i = 3;i <= MAX;i += 2){
    if(primes[i]){
      ps.push_back(i);
      for(ll j = i * i;j <= MAX;j += 2*i){
        primes[j] = false; 
      }
    }
  }
}

void calc_fat(ll n){
  ll a = n;
  int cont = 0;
  for(auto p : ps){
      if(p > a) break;
      
      int k = 0;
      while(n % p ==0){
        cont++;
        ++k;
        n/=p;
      }
      
      if(k){
        while(k--)
          printf("    %llu\n",p);
      }
  }
  if(cont == 0 || n!= 1) printf("    %llu\n",n);
  printf("\n");
}

int main(){
  ll n;
  sieve();
  while(1){
    scanf("%llu",&n);
    if(n == -1) break;

    calc_fat(n);
  }

  return 0;
}
