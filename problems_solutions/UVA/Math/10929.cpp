#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
  string num;
  while(cin >> num){
    if(num == "0")break;
    ll sum = 0;   

    int turn = 1;
    for(auto el : num){
      if(turn) sum += el-48;
      else sum -= el-48;
      turn = 1 - turn;
    }   

    if(sum % 11 == 0){
      printf("%s is a multiple of 11.\n",num.c_str());
    }else{
      printf("%s is not a multiple of 11.\n",num.c_str());
    }
  }
  
  return 0;
}
