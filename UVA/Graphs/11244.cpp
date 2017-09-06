#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cstring>
#include <queue>

using namespace std;

#define MAX 101
#define ii pair<int,int>
string matrizona[MAX];
int cont = 0,linha,coluna;
int visited[MAX];

void dfs(int x,int y){

    queue<ii> fila;
    fila.push(ii(x,y));

    while(!fila.empty()){

      int aux = fila.front().first;
      int aux2 = fila.front().second;
      fila.pop();

      for (int i = -1 + aux; i < 2 + aux; ++i)
      {
        for (int j = -1 + aux2; j < aux2 + 2; ++j)
        {
          if(j>=0 && i>=0 && i<linha && j<coluna){
            if(matrizona[i][j] == '*'){
                matrizona[i][j] = '.';
                cont++;
                fila.push(make_pair(i,j));
            }
          }
        }
      }

    }

}

int main(){

  int estrelas = 0;

  while(scanf("%d %d",&linha,&coluna),linha | coluna){

    memset(visited,0,sizeof visited);
    memset(visited,0,sizeof visited);

    for (int i = 0; i < linha; ++i)
    {
      cin >> matrizona[i];
    }

    for (int i = 0; i < linha; ++i)
    {

      for (int j = 0; j < coluna; ++j)
      {

        if(matrizona[i][j] == '*'){
            dfs(i,j);
            if(cont == 1){
              estrelas++;
            }
            cont = 0;
        }


      }
    }

    printf("%d\n",estrelas);
    estrelas = 0;

  }

  return 0;
}
