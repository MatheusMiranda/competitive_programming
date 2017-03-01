#include <bits/stdc++.h>

using namespace std;

long long v[102];

long long mdc(long long a,long long b){
  return (!b) ? a : mdc(b,a % b);
}

long long lcm(long long a,long long b){
  return (a * b) / mdc(a,b);
}

map<int,int> dic;

int main(){
  
  long long n,t;
  while(scanf("%lld %lld",&n,&t), n | t){

    for(long long i =1;i <=n;++i){
      scanf("%lld",&v[i]);
      dic[v[i]] = 1;
    }

    for(int i = 2;i <= n;++i){
      v[i] = lcm(v[i],v[i-1]);
    }

    int flag = 1;

    for(long long i = 2;i <= t;++i){
      if(dic[i]) continue;
      if(lcm(i,v[n]) == t){
        printf("%lld\n",i);
        flag = 0;
        break;
      }
    }
    
    if(flag) printf("impossivel\n");

  }

  return 0;
}
