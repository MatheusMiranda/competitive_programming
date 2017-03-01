#include <iostream>
#include <cstring>
#include <vector>

using namespaces std;

#define MAX 100010
vector<int> vetorzao;
int visitados[MAX];
int relacionamentos[MAX];

void dfs(int no){

  // visitados[no] = 1;

  for (auto it : vetorzao[j]){
    if(visitados[it] == 0){
      visitados[it] = 1;
      relacionamentos[it]++;
      relacionamentos[no]++;
      bfs(it);
    }
  }

}

int main(){

  int m,n;
  memset(visitados,0,sizeof visitados);
  memset(relacionamentos,0,sizeof relacionamentos);

  scanf("%d %d",&m,&n);

  int origem,destino;
  for (int i = 0; i < n; ++i)
  {
      scanf("%d %d",&origem,&destino);
      vetorzao[origem].push_back(destino);
  }

  for (int j = 1; j <= n; ++j)
  {
    if(visitados[j] == 0){

      visitados[j] = 1;
      bfs(j);

    }
  }



}
