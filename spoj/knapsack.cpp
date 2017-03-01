#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

using par = pair<long long,long long>;

#define MAX 2020

long long s,n;
long long dp[MAX][MAX];

vector<par> vet;

long long func(long long restante,long long ind){

    if(ind == n) return 0;
    
    if(dp[restante][ind] != -1) return dp[restante][ind];
    
    long long ans = 0;
    
    if(restante - vet[ind].first < 0) ans = func(restante,ind+1);
    else ans = max(vet[ind].second + func(restante - vet[ind].first,ind+1),func(restante,ind+1));

    return dp[restante][ind] = ans;

}  

int main(){
  
   long long a;

   scanf("%lld %lld",&s,&n);

   a = n;
   long long peso,valor;

   memset(dp,-1,sizeof dp);

   while(a--){
      scanf("%lld %lld",&peso,&valor);

      vet.push_back(par(peso,valor));

   } 

   printf("%lld\n",func(s,0));


  return 0;

}
