#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;
ull fat[1003];

#define P 1000000007

void precomp(){
  fat[0] = 1;
  for(int i  = 1;i <= 1010;++i){
    fat[i] = (fat[i-1] * i) % P;
  }
}

ull fast_exponentiation(ull n,ull factor){
  ull x;

  if(factor==0) return 1;
  if(factor==1) return n;

  if(factor%2==0){
    x = fast_exponentiation(n,factor/2)%P;
    return (x*x)%P;
  }else{
    return (n*fast_exponentiation(n,factor-1))%P;
  }
}

ull modular_inverse(ull n){
  return fast_exponentiation(n,P-2);
}

int main(){
  precomp();
  string a;

  while(cin >> a){
    ull num = fat[a.size()];
     
    map<char,int> dic;
   
    for(auto el : a){
      dic[el]++;
    }
    
    ull dem = 1;
    for(auto el : dic){
      dem = (dem * fat[el.second]) % P;
    }
    
    cout << (num * modular_inverse(dem)) % P << endl;
  }

  return 0;
}
