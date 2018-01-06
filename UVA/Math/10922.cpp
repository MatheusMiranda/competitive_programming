#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;

int main(){
  string p;
  while(1){
    cin >> p;
    ll sum = 0;
    if(p == "0") break;
    int cont = 0;

    for(auto el : p){
      sum += el - 48;
    }
    
    bool flag = false;   
    string aux;

    if(sum % 9 == 0){

      flag = true;
      while(sum % 9 == 0){
        if(sum == 9){
          cont+=1;
          break;
        }
        cont +=1;
        aux = to_string(sum);
        sum = 0;
        for(auto el : aux){
          sum += el - 48;
        }
      }
      cout << p << " is a multiple of 9 and has 9-degree " << cont << "." << endl;
    }else{
      cout << p << " is not a multiple of 9." << endl;
    }
  }

  return 0;
}
