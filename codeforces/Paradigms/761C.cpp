#include<bits/stdc++.h>

using namespace std;

int dis[52],low[52],esp[52];

int main(){

  int n,m;
  string p;

  cin >> n >> m;

  for(int i = 0;i < n;++i){
    cin >> p; 
    dis[i] = 10000;low[i] = 10000;esp[i] = 10000;   
 
    for(int j =0;j < m;++j){
      if(p[j] >= '0' && p[j] <= '9') dis[i] = min(dis[i],min(j,m-j));
      if(p[j] >= 'a' && p[j] <= 'z') low[i] = min(low[i],min(j,m-j));
      if(p[j] == '&' || p[j] == '*' || p[j] == '#') esp[i] = min(esp[i],min(j,m-j));
    }    
  }

  int ans = 1<<30;

  for(int i  =0;i < n;++i)
    for(int j  =0;j < n;++j)
      for(int k  =0;k < n;++k){
        if(j == i || i == k || i == j) continue;
        ans = min(ans,dis[i] + low[j] + esp[k]);
      }

  cout << ans << endl;

  return 0;
}
