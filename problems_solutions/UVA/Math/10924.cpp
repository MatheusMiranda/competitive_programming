#include <bits/stdc++.h>

using namespace std;
string alf = "0abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
using ll = unsigned long long;

int pri[1050];

void find_primes(){
  pri[1] = 1;
  for(int i = 2;i <= 1040;++i){
    if(pri[i] == 0) pri[i] = 1;
    for(int j = i + 1;j <= 1040;++j){
      if(j % i == 0){
        pri[j] = -1;
      }
    }
  }
}

int main(){
  string a;

  find_primes();
  
  while(cin >> a){
    ll sum = 0;
    for(auto el : a){
      sum += alf.find(el);
    }
      
    if(pri[sum] == -1) printf("It is not a prime word.\n");
    else printf("It is a prime word.\n");

  }
  
  return 0;
}
