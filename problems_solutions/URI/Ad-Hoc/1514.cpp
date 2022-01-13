#include <bits/stdc++.h>

using namespace std;
int col[120],lin[120];

int main(){
  int n,m;

  while(scanf("%d %d",&n,&m),n | m){

    memset(col,0,sizeof col);
    memset(lin,0,sizeof lin);
    int num;

    for(int i = 1;i <= n;++i){
      for(int j = 1;j <=m;++j){
        cin >> num;
        if(num){
          col[j]++;
          lin[i]++;
        }
      }
    }
    int args[4];
    memset(args,0,sizeof args);

    for(int i = 1;i <= n;++i){
      if(lin[i] == 0) args[0] = 1;
      if(lin[i] == m) args[1] = 1;
    }
    for(int i = 1;i <= m;++i){
      if(col[i] == 0) args[2] = 1;
      if(col[i] == n) args[3] = 1;
    }

    int cont = 4;
    for(auto el : args){
      if(el) cont--;
    }
    cout << cont << endl;
  }

  return 0;
}
