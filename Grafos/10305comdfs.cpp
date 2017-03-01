#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <cstdio>

using namespace std;

#define MAX 101
vector<int> vetorzao[MAX];
int visitados[MAX];
vector<int> resposta;

void dfs(int n){

  if(visitados[n] == 1){
    return;
  }

  visitados[n] = 1;

  for(auto v : vetorzao[n]){

      if(visitados[v] == 0){
        dfs(v);
      }

  }

  resposta.push_back(n);

}

int main(){

  int m,n;

  scanf("%d %d",&n,&m);

  while(true){

    if(m == 0 && n == 0) break;

    int p,q;
    memset(visitados,0,sizeof visitados);

    for (int l = 0; l < m; ++l)
    {
       scanf("%d %d",&p,&q);
       vetorzao[p].push_back(q);
    }

    for (int i = 1; i <= n; ++i)
    {
        if(visitados[i] == 0){
            dfs(i);
        }
    }

    for (int i = (resposta.size() - 1); i >= 0; --i)
    {
      if(i!=0){
        printf("%d ",resposta[i]);
      }else{
        printf("%d",resposta[i]);
      }
    }

    printf("\n");

    resposta.clear();
    for (int i = 1; i <= n; ++i)
    {
      vetorzao[i].clear();
    }
    scanf("%d %d",&n,&m);
  }


  return 0;
}
