#include <bits/stdc++.h>

using namespace std;

int main(){
  string a;
  cin >> a;
  int cont = 0;

  while(a.size() > 1){
    int sum = 0;
    for(auto el : a){
      sum += el - '0';
    }
    a = to_string(sum);
    cont++;
  }

  cout << cont << endl;

  return 0;
}
