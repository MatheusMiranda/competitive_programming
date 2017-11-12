#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;

#define MAX 100002
#define MOD 1000000009

ll vet[MAX];

void precomp(){
  vet[3] = 1;

  for(int i = 4;i < MAX;++i){
    vet[i] = (i * vet[i - 1]) % MOD;
  }
}

int main(){
  precomp();
  ll n;

  while(cin >> n,n){
    cout << vet[n] << endl;
  }

  return 0;
}
