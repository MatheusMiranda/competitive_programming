#include <bits/stdc++.h>

using namespace std;

using ll = long long;
vector<ll> vet, sums;

int main(){
  ll n;
  int caso = 0;
  while(cin >> n,n){
    ll a;

    while(n--){
      cin >> a;
      vet.push_back(a);
    }

    for(int i = 0;i < vet.size();++i){
      for(int j = 0;j < vet.size();++j){
        if(i == j) continue;
        sums.push_back(vet[i] + vet[j]);
      }
    }

    int q;
    cin >> q;
    
    printf("Case %d:\n",++caso);
    while(q--){
      cin >> a;
      ll prox;
      ll menor = 10000000000000;
      for(auto el : sums){
        if(abs(a - el) < menor){
          menor = abs(a-el);
          prox = el;
        }
      }
      printf("Closest sum to %lld is %lld.\n",a,prox);
    }

    vet.clear();
    sums.clear();
  }

  return 0;
}
