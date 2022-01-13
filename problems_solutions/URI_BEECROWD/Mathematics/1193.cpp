#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string digits = "0123456789abcdef";

ll from_base(string s,int base){                                                   
  ll res = 0;                                                                      
  for(auto el : s){
    char aux = tolower(el);                                                                
    res *= base;                                                                   
    res += digits.find(aux);                                                        
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
  int n;
  cin >> n;
  string num,b,hex,bin;
  int caso = 0,base;
  ll dec;
  while(n--){
    cin >> num >> b;
    printf("Case %d:\n",++caso);
    
    if(b == "bin"){
      dec = from_base(num,2);
      printf("%lld dec\n",dec);
      hex = to_base(dec,16);
      printf("%s hex\n",hex.c_str());
    }else if(b == "dec"){
      dec = stoi(num);
      hex = to_base(dec,16);
      printf("%s hex\n",hex.c_str());
      bin = to_base(dec,2);
      printf("%s bin\n",bin.c_str());
    }else if(b == "hex"){
      dec = from_base(num,16);
      printf("%lld dec\n",dec);
      bin = to_base(dec,2);
      printf("%s bin\n",bin.c_str());
    }
    printf("\n");
  }
  
  return 0;
}
