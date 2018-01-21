#include <bits/stdc++.h>

using namespace std;
using ll = long long;
map<ll,ll> dic1, dic2;

int main(){
  ll a,b,c;

  while(scanf("%lld %lld",&a,&b),a | b){
    for(int i = 0;i < a;++i){
      scanf("%d",&c);
      dic1[c]++;
    }
    for(int i = 0;i < b;++i){
      scanf("%d",&c);
      dic2[c]++;
    }
    ll cont1 = 0;
    ll cont2 = 0;
    for(auto el : dic1){
        if(!dic2[el.first]) cont1++;
    }
    for(auto el : dic2){
        if(!dic1[el.first]) cont2++;
    }
  
    printf("%lld\n",min(cont1,cont2));

    dic1.clear();
    dic2.clear();
  } 

  return 0;
}
