#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll mat[102][102];

int main(){
  ll n,a;
  char x;
  
  cin >> n;

  int caso = 0;

  while(n--){
    memset(mat,0,sizeof mat);
    cin >> x >> x >> a;

    bool s = true;    
    for(int i = 0;i < a;++i)
      for(int j = 0;j < a;++j)
      {
        scanf("%lld",&mat[i][j]);
        if(mat[i][j] <0) s= false;
      }

    
    for(int i = 0;i < a;++i){
      for(int j = 0;j < a;++j){
        if(mat[i][j] != mat[a - i - 1][a - j - 1]){
          s = false;
        }
      }
    }

    if(s) printf("Test #%d: Symmetric.\n",++caso);
    else printf("Test #%d: Non-symmetric.\n",++caso);
  }

  return 0;
}
