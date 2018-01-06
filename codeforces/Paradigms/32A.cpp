#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;
vector<int> vet;

int main(){
  ll a,b,c;

  cin >> a >> b;

  while(a--){
    cin >> c;
    vet.push_back(c);
  }

  sort(vet.begin(),vet.end());

  ll cont = 0;
  for(int i  = 0;i < vet.size();++i){
    for(int j =i+1;j < vet.size();++j){
      ll diff = abs(vet[j] - vet[i]);
      if(diff <= b) cont++;
    }
  } 

  cout << cont * 2 << endl;
  return 0;
}
