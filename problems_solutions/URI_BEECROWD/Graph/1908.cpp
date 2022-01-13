#include <iostream>
#include <queue>
#include <cstring>
#include <vector>

using namespace std;

#define MAX 10100;
vector<int> vetorzao[MAX];
int visitados[MAX];


int main(){

  int campi,linhas;
  vector<int> vetor;

  scanf("%d %d",&campi,&linhas);

  int n,campi;

  memset(vetor,0,sizeof vetor);

  for (int i = 0; i < linhas; ++i)
  {
    scanf("%d",&nos);

    for (int j = 0; j < nos; ++j)
    {
        scanf("%d",campi);
        vetor.push_back(campi);

    }

    for (int l = 0; l < vetor.size() - 1; ++l)
    {
      vetorzao[vetor[l]].push_back(vetor[l + 1]);
      vetorzao[vetor[l + 1]].push_back(vetor[l]);
    }

    vetor.clear();

  }

  int destino = campi;
  int source,contador = 0;
  queue<int> fila;
  int v;

  fila.push(source);
  visitados[source] = 1;

  while(!fila.empty()){

    source = v;
    contador++;

    for (int k = 0; i < vetorzao[source].size(); ++i)
    {
        if(vetor[vetorzao[source][k]]) == 0){
            fila.push(vetor[vetorzao[source][k]]);
        }

    }

    fila.pop();
    v = fila.front();

    if(v == destino){
      break;
    }

  }

  printf("Contador eh :%d\n",contador);

  return 0;
}
