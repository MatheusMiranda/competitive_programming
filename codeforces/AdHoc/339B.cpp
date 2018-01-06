#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;
vector<ll> vet;

int main(){
  ll total,n,a;

  cin >> total >>  n;
  while(n--){
    cin >>a;
    vet.push_back(a);
  }

  ll sum = 0;
  int pos = 1;
  for(auto el : vet){
    if(el > pos){
      sum += abs(el - pos);
    }
    else if(el < pos){
      ll aux = abs(total - pos) + int(abs(total + el)) % total;
      sum += aux % total;
    }
    

    pos = el;
  }

  cout << sum << endl;

  return 0;
}
