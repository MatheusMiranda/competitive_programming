#include <bits/stdc++.h>

using namespace std;
using par = pair<int,int>;

vector<par> viz = {par(0,1), par(1,0),par(-1,0),par(0,-1)};

int main(){
  int a,b,c,d;

  while(cin >> a >> b >> c >> d,a|b|c|d){
    par matrizona[110][110];

    for(int i = 0;i < b;++i){
      for(int j = 0;j < c;++j){
        scanf("%d",&matrizona[i][j].first);
        matrizona[i][j].second = matrizona[i][j].first;
      }
    }

    while(d--){
      for(int i = 0;i < b;++i){
        for(int j = 0;j < c;++j){
          matrizona[i][j].first = matrizona[i][j].second;
        }
      }

      for(int i = 0;i < b;++i){
        for(int j = 0;j < c;++j){
          for(auto el : viz){
            int ni = i + el.first;
            int nj = j + el.second;

            if(ni < 0 or nj < 0 or ni >= b or nj >= c) continue;

            if(matrizona[ni][nj].first == matrizona[i][j].first + 1 || (matrizona[i][j].first == a - 1 and matrizona[ni][nj].first == 0)){
              matrizona[ni][nj].second = matrizona[i][j].first;
            }
          }
        }
      }

    }

    for(int i = 0;i < b;++i){
      for(int j = 0;j < c;++j){
        if(!j)printf("%d",matrizona[i][j].second);
        else printf(" %d",matrizona[i][j].second);
      }
      cout << endl;
    }

  }


}
