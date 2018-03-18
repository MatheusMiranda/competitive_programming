#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;
bool is_sol;
ll c;

int memo[22][22][205];

bool func(ll a, ll b){
  return a > b;
}

vector<int> vet[25];

ll dp(ll id, ll m, ll total){
  if(memo[id][m][total] != -1) return memo[id][m][total];

  if(m == c){
    is_sol = true;
    return 0;
  }
  if(id == vet[m].size()){
    return 0;
  }

  ll ans = 0;

  if(total >= vet[m][id]){
    ans = max(dp(0,m+1,total - vet[m][id]) + vet[m][id],dp(id+1,m,total));
  }else{
    ans = dp(id + 1,m,total);
  }

  return memo[id][m][total] = ans;
}

int main(){
  int t;
  cin >> t;
  ll total,val;
  string linha;
  int caso = 0;
  ll qt;

  while(t--){
    memset(memo,-1,sizeof memo);
    cin >> total >> c;
    getchar();

    for(int i = 0;i < c;++i){
      cin >> qt;

      while(qt--){
        cin >> val;
        vet[i].push_back(val);
      }

    }
      
    is_sol = false;
    ll gasto = dp(0,0,total);

    if(gasto <= total && is_sol == true) printf("%llu\n",gasto);
    else printf("no solution\n");

    for(int i = 0;i <= c;++i) vet[i].clear();
  }

  return 0;
}
