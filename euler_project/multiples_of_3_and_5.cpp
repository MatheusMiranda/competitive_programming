#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
  ll sum = 0;
  for(int i = 1;i < 1000;++i){
    if(i% 3 == 0 || i % 5 == 0) sum += i;
  }

  cout << sum << endl;
  return 0;
}
