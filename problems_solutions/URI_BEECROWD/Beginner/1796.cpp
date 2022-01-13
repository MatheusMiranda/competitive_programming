#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  int a = n;
  int cont = 0;
  int c;
  while(a--){
    cin >> c;
    if(!c) cont++;
  }

  if(cont > n/2)cout << "Y" << endl;
  else cout << "N" << endl;

  return 0;
}
