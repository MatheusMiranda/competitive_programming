#include <bits/stdc++.h>

using namespace std;

int main(){
  double a,b,c,d,e,f;
  double dist;

  while(cin >> a >> b >> c >> d >> e >> f){
    dist = sqrt(((b - e) * (b - e)) + ((c - f) * (c - f)));

    if(a - dist >= d) cout << "RICO" << endl;
    else cout << "MORTO" << endl;
  }

  return 0;
}
