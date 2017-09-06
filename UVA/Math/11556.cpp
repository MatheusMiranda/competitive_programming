#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;

int main(){
  ll a,b;
  
  while(scanf("%llu %llu",&a,&b) != EOF){
    if(1LL << (b + 1) >= a) printf("yes\n");
    else printf("no\n");
  }  

  return 0;
}
