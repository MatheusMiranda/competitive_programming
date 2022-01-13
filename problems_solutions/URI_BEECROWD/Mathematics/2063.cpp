#include <bits/stdc++.h>

using namespace std;

long long vet[101];
long long v[101];

long long mdc(long long a,long long b){ return (!b)? a : mdc(b,a % b);}

long long dest;

long long dfs(long long no,long long cont){
  if(no == dest) return cont;
  else return dfs(vet[no],cont+1);
}

int main(){
  
  long long n,a;
  cin >> n;
  for(long long i = 1;i <= n;++i){
    cin >> vet[i];
  }

  for(long long i = 1;i <= n;++i){
    long long dist;
    dest = i;
    dist = dfs(vet[i],1);
    v[i] = dist;
  }

  for(long long i =2;i <=n;++i){
    v[i] = (v[i-1] * v[i]) / mdc(v[i-1],v[i]); 
  }

  printf("%lld\n",v[n]);
}
