#include <bits/stdc++.h>

using namespace std;
string digits = "0123456789ABCDEF";
using ll = long long;

ll find_min_base(string s){
  size_t base = 2;
  for(auto el : s){
     base = max(base,digits.find(el) + 1);
  }

  return base;
}

ll from_base(string s,int base){
  ll res = 0;
  for(auto el : s){
    res *= base;
    res += digits.find(el); 
  }
  return res;
}

string to_base(ll n,int base){
  string resp = "";
  do{
    resp = digits[n%base] + resp;
    n /= base; 
  }while(n);
    
  return resp;
}

int main(){
  ll a,b;
  string num;

  while(cin >> a >> b >> num){

    ll mb = find_min_base(num);

    if(mb > a) printf("%s is an illegal base %d number\n",num.c_str(),a);
    else{
      ll dec = from_base(num,a);
      string resp = to_base(dec,b);
      printf("%s base %lld = %s base %lld\n",num.c_str(),a,resp.c_str(),b);
    }
  }
  
  return 0;
}
