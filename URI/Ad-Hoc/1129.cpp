#include <bits/stdc++.h>

using namespace std;

int main(){
  int a,b,c,d,e;
  int n;

  while(cin >> n, n){
    while(n--){
      cin >> a >> b >> c >> d >> e;
      int cont = 0;
      char resp;
      if(a <= 127){
        resp = 'A';
        cont++;
      }
      if(b <= 127){
        resp = 'B';
        cont++;
      }
      if(c <= 127){
        resp = 'C';
        cont++;
      }
      if(d <= 127){
        resp = 'D';
        cont++;
      }
      if(e <= 127){
        resp = 'E';
        cont++;
      }
      if(cont > 1 || cont == 0) cout << "*" << endl;
      else cout << resp << endl;
    }
  }

  return 0;
}
