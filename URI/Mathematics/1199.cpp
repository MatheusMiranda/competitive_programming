#include <bits/stdc++.h>

using namespace std;
using ll = long long;
string digits = "0123456789ABCDEF";

ll from_base(string s,int base){                                                   
  ll res = 0;                                                                      
  for(auto el : s){
    char aux = toupper(el);                                                                
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
  string num;
  int base;
  while(cin >> num){
    if(num[0] == '-') break;
    string n = "";
    if(num[0] == '0' && num[1] == 'x'){
      for(int i = 2;i < num.size();++i){
        n += num[i];
      } 
      base = 16;
    }else{
      n = num;
      base = 10; 
    }
   
    long long resp;
    if(base == 10){
      string resp = "0x",result = to_base(stoi(n),16);
      resp += result;
      cout << resp << endl;
    }else if(base == 16){
      ll res = from_base(n,16);
      cout << res << endl;
    }
  }

  return 0;
}
