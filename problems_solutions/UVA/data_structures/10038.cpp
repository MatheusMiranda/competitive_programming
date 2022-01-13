#include <bits/stdc++.h>

using namespace std;
using ll = long long;
vector<ll> vet;
map<int,int> dic;

int main(){
  ll n,a;
  while(cin >> n){
    for(int i = 0;i < n;++i){
      cin >> a;
      vet.push_back(a);
    }
  
    for(int i = 0;i < vet.size() - 1;++i){
      ll val = abs(vet[i] - vet[i + 1]); 
      dic[val]++;
    } 

    bool flag = true;
    for(int i = 1;i <= n - 1;++i){
      if(!dic[i]) flag = false;
    }

    if(flag) cout << "Jolly"  << endl;
    else cout << "Not jolly" << endl;
    vet.clear();
    dic.clear();
  }

  return 0;
}
