#include <bits/stdc++.h>

using namespace std;

int mod = 1000000007;

int main(){

  string t;
  cin >> t;
  int c = 0,k =0;

  for(int i  = t.size() - 1;i>=0;--i){
    if(t[i] == 'b'){
        c++;
    }
    else {
      k+=c;c*=2;k%=mod;c%=mod;
    }
  }

  cout << k << endl; 

  return 0;
}
