#include <iostream>
#include <cstring>
#include <queue>
#include <cstdio>

using namespace std;

#define MAX 30

int visited[MAX];
string matrizona[MAX];
#define ii pair<int,int>
int n;


void bfs(int x,int y){

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
          if(j>=0 && i>=0 && i<n && j<n){
            if(matrizona[i][j] == '1'){
                matrizona[i][j] = '0';
                fila.push(make_pair(i,j));
            }
          }
        }
      }

    }

}

int main(){

  int count,test = 1;

  while(cin >> n){

    count = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> matrizona[i];
    }

    for (int i = 0; i < n; ++i)
    {

      for (int j = 0; j < n; ++j)
      {

        if(matrizona[i][j] == '1'){
            count++;
            bfs(i,j);
        }


      }
    }

    printf("Image number %d contains %d war eagles.\n",test,count);
    test++;

  }

  return 0;
}
