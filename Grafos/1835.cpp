#include <iostream>
#include <string>
#include <cstdio>
#include <queue>
#include <cstring>
#include <vector>

#define MAX 101
using namespace std;

vector<int> vetorzao[MAX];


int main(){
  int numerocasos,pontos,estradas,ini,destino,p1;
  int vetor[MAX];
  queue<int> fila;

  memset(vetor,0,sizeof vetor);

  scanf("%d",&numerocasos);

  for(int l = 0;l<numerocasos;++l){

    scanf("%d %d",&pontos,&estradas);

    for(int i = 0;i < estradas;++i){

      scanf("%d %d",&ini,&destino);
      vetorzao[ini].push_back(destino);
      vetorzao[destino].push_back(ini);

    }

    p1 = 1;

    fila.push(p1);
    vetor[p1] = 1;
    int tamanho;
    int numeroBlocos = 0;

    while(!fila.empty()){

      tamanho = vetorzao[p1].size();

        if(tamanho > 0){

          for(int k = 0;k<tamanho;++k){
            if(vetor[vetorzao[p1][k]] == 0){
              fila.push(vetorzao[p1][k]);
              vetor[vetorzao[p1][k]] = 1;
            }
          }

        }

         fila.pop();
         p1 = fila.front();

       if(fila.empty()){

          for (int w = 1; w <= pontos; ++w)
          {
            if(vetor[w] == 0){
              p1 = w;
              numeroBlocos++;
              vetor[w] = 1;
              fila.push(w);
              break;
            }
          }

       }

    }

    if(numeroBlocos > 0){
      printf("Caso #%d: ainda falta(m) %d estrada(s)\n",l + 1,numeroBlocos);
    }else{
      printf("Caso #%d: a promessa foi cumprida\n",l+1);
    }

    memset(vetor,0,sizeof vetor);
    for (int h = 1; h <= pontos; ++h)
    {
      vetorzao[h].clear();
    }

  }

  return 0;
}
