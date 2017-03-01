#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <memory>

using namespace std;

#define MAX 50010

int vetorzao[MAX];
int vetor[MAX],dist[MAX];
int contador = 0,pontoDePartida;

void dfs(int source,int size){
  if(vetor[source]){
    return;
  }
  vetor[source] = 1;
  int v = vetorzao[source];

  if(dist[v]){
    dist[source] = dist[v] + 1;
  }
  if(vetor[v] == 0){

    dfs(v,size+1);
    if(!dist[source]){
      dist[source] = dist[v] + 1;
    }

  }else{

    while(dist[source] == 0){

      dist[source] = size;
      source = vetorzao[source];

    }

  }


}

int main(){

  int n,inicio,destino,casosDeTeste;

  scanf("%d",&casosDeTeste);

  for (int f = 0; f < casosDeTeste; ++f)
  {
          scanf("%d",&n);

          memset(vetor,0,sizeof vetor);
          memset(dist,0,sizeof dist);
          memset(vetorzao,0,sizeof vetorzao);

          for (int i = 0; i < n; ++i)
          {
            scanf("%d %d",&inicio,&destino);
            vetorzao[inicio] = destino;
          }

          for(int j = 1;j <= n;++j){

            if(vetor[j] == 0) dfs(j,1);

          }

          int maior = -1,posicao;

          for (int k = 1; k <= n; ++k)
          {
            if(dist[k] > maior){
              maior = dist[k];
              posicao = k;
            }
          }

          printf("Case %d: %d\n",f + 1,posicao);

  }

  return 0;
}
