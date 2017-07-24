#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >>t;
  int a;

  while(t--){
    cin >> a;
    cout << (360%(180 - a)?"NO\n":"YES\n");
  }
  
  return 0;
}
