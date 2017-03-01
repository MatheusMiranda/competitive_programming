#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
#define MAX 210
vector<int> vetorzao[MAX];
bool bicolorable = true;
int colors[MAX];

void dfs(int no,int color){

    if(not bicolorable) return;

    colors[no] = color;

    for (auto it : vetorzao[no])
    {
        if(colors[it] == -1){
            dfs(it,1 - color);
        }else if(colors[it] == colors[no]){
            bicolorable = false;
            break;
        }
    }

}

int main(){

  int n,l;

  while(scanf("%d",&n),n){

      memset(colors,-1,sizeof colors);

      scanf("%d",&l);

      for(int i = 0;i < l;++i){

          int origem,destino;
          scanf("%d %d",&origem,&destino);
          vetorzao[origem].push_back(destino);
          vetorzao[destino].push_back(origem);
      }

      dfs(0,0);

      printf("%s\n",(bicolorable?"BICOLORABLE.":"NOT BICOLORABLE."));

      for (int i = 0; i <= n; ++i)
      {
          vetorzao[i].clear();
      }

      bicolorable = true;

  }



  return 0;
}
