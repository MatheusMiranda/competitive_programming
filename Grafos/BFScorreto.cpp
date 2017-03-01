#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

#define MAX 101

vector <int> vetorzao[MAX];
int vetor[MAX];

int main(){

  int inicio,destino,noInicial,n2;
  queue<int> fila;
  vector<int> naoPassou;

	memset(vetor,0,sizeof vetor);

  scanf("%d",&n2);
  while(n2 != 0){

    scanf("%d",&inicio);
    while(inicio != 0){

        scanf("%d",&destino);
        while(destino != 0){

          vetorzao[inicio].push_back(destino);
          scanf("%d",&destino);

        }

        scanf("%d",&inicio);
    }

    int tamanho,qtsNosIniciais,noDestino;

    scanf("%d",&qtsNosIniciais);

    for (int i = 0; i < qtsNosIniciais; ++i)
    {

          scanf("%d",&noInicial);

          fila.push(noInicial);

          while(!fila.empty()){


                    tamanho = vetorzao[noInicial].size();

                    for (int k = 0; k < tamanho; ++k)
                    {
                      if(vetor[vetorzao[noInicial][k]] == 0){
                        vetor[vetorzao[noInicial][k]] = 1;
                        fila.push(vetorzao[noInicial][k]);
                      }
                    }

                    fila.pop();
                    noInicial = fila.front();

          }


        int contador = 0;

        for (int l = 1; l <= n2; ++l)
        {
          if(vetor[l] == 0){
            contador++;
            naoPassou.push_back(l);
          }
        }

        printf("%d",contador);

        for (int j = 0; j < naoPassou.size(); ++j)
        {
          printf(" %d",naoPassou[j]);
        }
        printf("\n");

        naoPassou.clear();
        memset(vetor,0,sizeof vetor);

    }
        for (int z = 1; z <= n2; ++z)
        {
          vetorzao[z].clear();
        }

    scanf("%d",&n2);

  }

  return 0;
}
