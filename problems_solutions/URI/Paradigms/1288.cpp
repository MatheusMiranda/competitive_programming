#include <bits/stdc++.h>

using namespace std;
using par = pair<int,int>;

vector<par> vet;

int mat[120][120];

int dp(int cap,int ind){
  if(ind == vet.size() || cap == 0) return 0;
  
  if(mat[cap][ind] != -1) return mat[cap][ind];

  int ans = 0;
  
  if(vet[ind].second <= cap){
    ans = max(dp(cap,ind+1),dp(cap-vet[ind].second,ind+1) + vet[ind].first);
  }else{
    ans = dp(cap,ind+1);
  }

  return mat[cap][ind] = ans;
}

int main(){
  int n;
  scanf("%d",&n);
  int ls;

  while(n--){
    memset(mat,-1,sizeof mat);
    scanf("%d",&ls);
    int d,w;
    while(ls--){
      par a;
      scanf("%d %d",&a.first,&a.second);
      vet.push_back(a);
    }
    int cap,res;
    scanf("%d %d",&cap,&res);
    
    int total = dp(cap,0);
    if(total >= res) printf("Missao completada com sucesso\n");
    else printf("Falha na missao\n");
    vet.clear();
  }

  return 0;
}
