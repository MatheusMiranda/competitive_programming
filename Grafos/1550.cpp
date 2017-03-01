#include <iostream>
#include <cstring>
#include <queue>
#include <cstdio>

using namespace std;

#define MAX 10000

int dist[MAX];

int inverteNumero(int numero){

  int reverse = 0;

  while(numero != 0) {
        int rem = numero%10;
        reverse = reverse*10 + rem;
        numero/=10;
  }

  return reverse;
}


int main(){

  int t,a,b;
  queue<int> fila;

  scanf("%d",&t);

  for (int i = 0; i < t; ++i)
  {
      memset(dist,0,sizeof dist);

      while(!fila.empty()){
        fila.pop();
      }

      scanf("%d %d",&a,&b);

      fila.push(a);

      while(!fila.empty()){

          if(dist[b] != 0){
            break;
          }

          int numero = fila.front();
          fila.pop();

          if(numero + 1 <= MAX){

              if(dist[numero + 1] == 0){

                 dist[numero + 1] = dist[numero] + 1;
                 fila.push(numero + 1);

              }

          }

          int v = inverteNumero(numero);
          if(v <= MAX){

              if(dist[v] == 0){

                 dist[v] = dist[numero] + 1;
                 fila.push(v);

              }

          }

      }

      printf("%d\n",dist[b]);

  }

  return 0;
}
