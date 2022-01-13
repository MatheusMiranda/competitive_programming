#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<ll> vet;

int main(){
  ll a,b;

  cin >> a;
  string linha,num;

  getchar();
  while(a--){
    getline(cin,linha);
    stringstream ss(linha);

    while(ss >> num){
      vet.push_back(stoll(num));
    }

    ll max = -1;

    for(int i = 0;i < vet.size();++i){
      for(int j = 0;j < vet.size();++j){
        if(i == j) continue;
        ll res = __gcd(vet[i],vet[j]);
        if(res > max) max = res;
      }
    }

    cout << max << endl;
    vet.clear();
  }


  return 0;
}
