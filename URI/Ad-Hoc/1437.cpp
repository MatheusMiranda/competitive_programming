#include <bits/stdc++.h>

using namespace std;
string ds = "NLSO";

int main(){
  int n;
  while(cin >> n,n){
    string a;
    cin >> a;

    int d = 0;

    for(auto el : a){
      if(el == 'D'){
        d++;
        d%=4;
      }else{
        d--;
        if(d < 0) d = 3;
      }
    }
    
    cout << ds[d] << endl;
  }

  return 0;
}
