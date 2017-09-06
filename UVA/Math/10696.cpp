#include <bits/stdc++.h>

using namespace std;

long long f(long long num){
  if(num >= 101) return num - 10;
  else return f(f(num + 11));
}

int main(){

  long long a;

  while(scanf("%lld",&a),a){
    printf("f91(%lld) = %lld\n",a,f(a));
  }

  return 0;
}
