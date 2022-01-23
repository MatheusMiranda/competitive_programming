#include <bits/stdc++.h>

using namespace std;

int main(){
  string a;
  for(int i = 0;i < 400;++i){
    a += to_string(i);
  }

  int b;
  cin >> b;

  cout << a[b] << endl; 

  return 0;
}
