#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;

int main(){
  ll a,b;
  cin >> a;

  while(a--){
    cin >> b;
    string num = "";

    if(b == 1) cout << "1" << endl;
    else{ 
      for(int i = 9;i >= 2;--i){
        while(b % i == 0){
          b/=i;
          num += char(i + 48);
        }
      }  

      sort(num.begin(),num.end());
      if(b == 1) cout << num << endl;
      else cout << "-1" << endl;
    }
  }

  return 0;
}
