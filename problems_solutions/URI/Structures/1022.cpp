#include <bits/stdc++.h>

using namespace std;
using ll = long long;

long long mdc(long long a,long long b){
  return (!b) ? a : mdc(b,a % b);
}

int main(){
  ll n;
  ll n1,n2,d1,d2;
  char c;
  cin >> n;

  while(n--){
    scanf("%lld / %lld %c %lld / %lld",&n1,&d1,&c,&n2,&d2);
    ll n3,d3;

    if(c == '*'){
      n3 = n1 * n2;
      d3 = d1 * d2;
    }else if(c == '/'){
      n3 = n1 * d2;
      d3 = n2 * d1;
    }else{
      d3 = d1 * d2;
      if(c == '+'){
        n3 = d2 * n1 + d1 * n2;
      }else{
        n3 = d2 * n1 - d1 * n2;
      }
    }
    ll md = mdc(n3,d3);

    printf("%lld/%lld = ",n3,d3);
    if(md < 0)
      md *= -1; 
    printf("%lld/%lld\n",n3/md,d3/md);
  }

  return 0;
}
