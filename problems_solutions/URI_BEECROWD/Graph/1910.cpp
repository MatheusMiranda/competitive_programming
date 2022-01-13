#include <iostream>
#include <cstring>
#include <queue>
#include <cstdio>

using namespace std;
#define limite 100000
#define MAX 1000000

int dist[MAX];
int naopode[MAX];

int main(){

  int origem,destino,proibidos,canal;
  queue<int> fila;
  int flag = 0;


  scanf("%d %d %d",&origem,&destino,&proibidos);
  while(origem > 0 && destino > 0){

      memset(dist,-1,sizeof dist);
      memset(naopode,0,sizeof naopode);
      flag = 0;

       int numero;

       for (int i = 0; i < proibidos; ++i)
       {
         scanf("%d",&numero);
         naopode[numero] = 1;
       }

       fila.push(origem);
       dist[origem] = 0;

       while(!fila.empty()){

           if(dist[destino] != -1){
              flag = 1;
              break;
           }

           canal = fila.front();
           fila.pop();

           if(canal + 1 <= limite){
               if(naopode[canal + 1] != 1 && dist[canal + 1] == -1){
                 dist[canal + 1] = dist[canal] + 1;
                 fila.push(canal + 1);
               }
           }

           if(canal - 1 > 0){
               if(naopode[canal - 1] != 1 && dist[canal - 1] == -1){
                 dist[canal - 1] = dist[canal] + 1;
                 fila.push(canal - 1);
               }
           }

           if(canal * 2 <= limite){
               if(naopode[canal * 2] != 1 && dist[canal * 2] == -1){
                 dist[canal * 2] = dist[canal] + 1;
                 fila.push(canal * 2);
               }
           }

           if(canal * 3 <= limite){
               if(naopode[canal * 3] != 1 && dist[canal * 3] == -1){
                 dist[canal * 3] = dist[canal] + 1;
                 fila.push(canal * 3);
               }
           }

           if(canal%2 == 0){
               if(naopode[canal/2] != 1 && dist[canal/2] == -1){
                 dist[canal/2] = dist[canal] + 1;
                 fila.push(canal/2);
               }
           }

       }

      if(flag == 1){
        printf("%d\n",dist[destino]);
      }else{
        printf("-1\n");
      }

      while(!fila.empty()){

        fila.pop();

      }

    scanf("%d %d %d",&origem,&destino,&proibidos);
  }



  return 0;
}



// # If(dist[destino] != -1) break;

//  if(canal + 1 <= limite){
//      if(naopode[canal + 1] != 1 && dist[canal + 1] == -1){
//        dist[canal + 1 ] = dist[canal] + 1;
//        fila.push(canal + 1);
//      }

//  }


// # 12582
// # 12376
