#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;
vector<int> vet;

int main(){
  ll a,b,c;
    
  cin >> a;
  int caso = 0;

  while(a--){
    cin >> b;
    while(b--){
      cin >> c;
      vet.push_back(c);
    } 

    ll dem = 1;
    ll num = 0;
    for(auto el : vet){
      dem *= el;
    }
    
    int a = vet.size();
    for(int i = 0;i < a;++i){
      ll prod = 1;
      for(int j = 0;j < a;++j){
        if(i == j) continue;
        prod *= vet[j];
      }
      num += prod;
    }
    
    dem *= a;
    ll d = __gcd(dem, num);
    cout << "Case " << ++caso << ": " << dem/d << "/" << num/d << endl; 
    vet.clear();
  }
  
  return 0;
}
