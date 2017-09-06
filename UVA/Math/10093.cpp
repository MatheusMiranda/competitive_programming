#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string base = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

ll to_long(string s,int b){
  long long res = 0;
  for(auto el : s){
    res *= b;
    res += base.find(el);
  }
  return res;
}

int main(){

  string num;

  while(cin >> num){
    int maior = 0;
    for(auto el : num){
      int ind = base.find(el);
      if(ind > maior) maior = ind;
    }
    int b = maior + 1;

    cout << "B deu " << b << endl; 

    long long cv = to_long(num,b);
    cout << "Valor deu " << cv << endl;
    //if(base > 62) printf("number is impossible!\n");
  }


  return 0;
}
