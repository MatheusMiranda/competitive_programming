#include <bits/stdc++.h>

using namespace std;
using long long = ll;

int main(){

  long long a,b,c;
  while(scanf("%lld %lld %lld",&a,&b,&c)){
    long long m = 0,temp;   

    for(int i = 32;i >= 0;--i){
      if(a & (1 << i)){
        if(m < L){
          m |= (a & (1 << i));
        }
      }else{
        if((m | (1 << i)) < = U){
          m |= (1 << i);
        }
      }
    }

    printf("%lld\n",m);
  }

  return 0;
}
