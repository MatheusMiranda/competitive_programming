#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;

ll pri[1060];
vector<ll> primes;

void find_primes(){
  pri[1] = 1;
  primes.push_back(1);
  for(int i = 2;i <= 1040;++i){
    if(pri[i] == 0){
       pri[i] = 1;
       primes.push_back(i);
    }
    for(int j = i + 1;j <= 1040;++j){
      if(j % i == 0){
        pri[j] = -1;
      }
    }
  }
}

int main(){
  ll a,b;
  find_primes();
  while(cin >> a >> b){
    cout << a << " " << b << ":";
  
    int cont = 0;  
    for(auto el : primes){
        if(el > a) break;
        cont++;
    }

    if(cont % 2 == 0 && cont >= 2 * b){
      int mid = cont/2 -1;
      for(int i = mid - (b-1);i <= mid + b;++i){
        cout << " "  << primes[i];
      }
      cout << endl;
    }else if(cont %2 != 0 && cont > 2 * b){
      int mid = cont/2;
      for(int i = mid - (b - 1);i <= mid + (b-1);++i){
        cout << " " << primes[i];
      }
      cout << endl;
    }else{
      for(int i = 0;i < cont;++i){
        cout << " " << primes[i];
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}
