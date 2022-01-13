#include <bits/stdc++.h>

using namespace std;

int main(){

  long long n;
  while(scanf("%lld",&n),n){
    printf("%lld\n",(n * (n + 1) * (2 * n + 1))/6);
  }

  return 0;
}
