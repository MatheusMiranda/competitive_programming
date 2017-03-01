#include <iostream>
#include <cstring>
#include <queue>
#include <cstdio>
#include <vector>

using namespace std;

#define MAX 501
#define ii pair<int,int>
string matrizona[MAX];
int cont = 0;
int n,m;

vector<ii> vetor{ii(1,0),ii(-1,0),ii(0,1),ii(0,- 1)};

ii bfs(int x,int y){

  int visited[n][m];
  memset(visited,0,sizeof visited);
  queue<ii> fila;
  fila.push(ii(x,y));
  int a,b;

  while(!fila.empty()){

    int aux = fila.front().first;a= aux;
    int aux2 = fila.front().second;b = aux2;
    fila.pop();

    visited[aux][aux2] = 1;


      for (auto it : vetor){

          if(it.first>=0 && it.second>=0 && it.first<n && it.second <m){

            if(matrizona[it.first][it.second] == '.' && visited[it.first][it.second] == 0){
                fila.push(make_pair(it.first,it.second));
            }

          }

      }

  }

  return make_pair(a,b);
}

void bfs2(int x,int y){

  int visited2[n][m];
  memset(visited2,0,sizeof visited2);
  queue< pair<ii, int> > fila;
  fila.push(make_pair(ii(x,y), 0));
  int a,b;
  int meutotal = 0;

  while(!fila.empty()){

    int aux = fila.front().first.first;a= aux;
    int aux2 = fila.front().first.second;b = aux2;
    int totalateaqui = fila.front().second;
    fila.pop();
    meutotal = max(totalateaqui,meutotal);

    visited2[aux][aux2] = 1;

    vector<ii> vetor{ii(aux+1,aux2),ii(aux-1,aux2),ii(aux,aux2+1),ii(aux,aux2 - 1)};

          for (auto it : vetor){

            if(it.first>=0 && it.second>=0 && it.first<n && it.second <m){

              if(matrizona[it.first][it.second] == '.' && visited2[it.first][it.second] == 0){
                  fila.push(make_pair(make_pair(it.first,it.second), totalateaqui+1));
              }

            }

          }


  }

    printf("%d\n",meutotal);


}

int main(){

    ii la;
    scanf("%d %d",&n,&m);

    while(n > 0 && m > 0){

        int flag = 0;

        for (int i = 0; i < n; ++i){
            cin >> matrizona[i];
        }

        for (int i = 0; i < n; ++i){

          for (int j = 0; j < m; ++j){

            if(matrizona[i][j] == '.'){
                la = bfs(i,j);
                flag = 1;
            }

          }

          if(flag == 1){
            break;
          }

        }

        bfs2(la.first,la.second);
        scanf("%d %d",&n,&m);

    }

  return 0;
}
