#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

#define MAX 55;

int vetor[MAX];
vector<int> vetorzao[MAX];

void dfs(int v){



}

int main(){

  int cidades,pontes;
  int inicio,destino;

  scanf("%d %d",&cidades,&pontes);
  memset(vetor,0,sizeof vetor);

  for (int i = 0; i < pontes; ++i)
  {
    scanf("%d %d",&inicio,&destino);
    vetorzao[inicio].push_back(destino);
    vetorzao[destino].push_back(inicio);
  }

  for (int i = 0; i < cidades; ++i)
  {
    if(vetor[i] == 0){

    }
  }

  return 0;
}
