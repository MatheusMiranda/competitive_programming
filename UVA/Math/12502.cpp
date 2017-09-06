#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  scanf("%d",&n);
  int a,b,c;

    while(n--){
    scanf("%d %d %d",&a,&b,&c);
    double total = a + b;

    cout << abs( (total / 3.0) - a) * (c / (total/3) ) << endl;
  }

  return 0;
}
