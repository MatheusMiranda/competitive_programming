#include <bits/stdc++.h>

using namespace std;

int main(){
  int a,b,c,d;

  while(cin >> a >> b >> c >> d, a | b | c | d){
    int s = 0;
    if(a > c || (a == c && d < b)) c += 24;
    int s1 = a * 60 + b;
    int s2 = c * 60 + d;
    cout << abs(s2 - s1) << endl;
  }

  return 0;
}
