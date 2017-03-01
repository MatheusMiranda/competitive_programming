#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
#include <map>
#include <stack>

using namespace std;

#define MAX 501
int source;
int menorIdadeSol = 500;
vector <int> vetorzao[MAX];
int idades[MAX];
int vetor[MAX],chegouUmaVez = 0;
map<int,int> localizador;
stack<pair<int,int > > pilha;
int menor = 500;
int respostaFinal = 500;

int main(){

  int empregados,gerenciasDiretas,instrucoes,idade;


  while(scanf("%d %d %d",&empregados,&gerenciasDiretas,&instrucoes)!=EOF){

  for (int i = 1; i <= empregados; ++i)
  {
    scanf("%d",&idade);
    idades[i] = idade;
  }

  int e1,e2;

  for (int o = 1; o <= gerenciasDiretas; ++o){

        scanf("%d %d",&e1,&e2);
        vetorzao[e2].push_back(e1);

  }

  // for (int j = 1; j <= empregados; ++j)
  // {
  //   for(auto k : vetorzao[j]){

  //     printf("Inicio %d fim %d\n",j,k );

  //   }
  // }

  char letra;
  memset(vetor,0,sizeof vetor);

  for (int e = 0; e < instrucoes; ++e)
  {

      int n1,n2,tamanhoLista;
      queue<int> fila;
      scanf(" %c",&letra);

      if(letra == 'P'){

        memset(vetor,0,sizeof vetor);
        scanf("%d",&source);

        menor = 1000;
        fila.push(source);
        vetor[source] = 1;

        while(!fila.empty()){

          int u = fila.front();fila.pop();

          tamanhoLista = vetorzao[u].size();

          for (int t = 0; t < tamanhoLista; ++t)
          {
            int v = vetorzao[u][t];
            if(vetor[v] == 0){
              vetor[v] = 1;
              fila.push(v);
              // printf("Idade de v foi%d\n",idades[v]);
              menor = min(menor,idades[v]);
            }

          }

        }

        if(menor == 1000){
          printf("*\n");
        }
        else{
          printf("%d\n",menor);
        }

      }else if(letra == 'T'){

        scanf("%d %d",&n1,&n2);

        swap(vetorzao[n1],vetorzao[n2]);


        for (int i = 1; i <= empregados; ++i)
        {
          int tamanho = vetorzao[i].size();
          for(int k = 0;k < tamanho;++k){
            if(vetorzao[i][k] == n2) vetorzao[i][k] = n1;
            else if(vetorzao[i][k] == n1) vetorzao[i][k] = n2;
          }
        }

      }

      menor = 500;
      // respostaFinal = 500;
      // chegouUmaVez = 0;
      memset(vetor,0,sizeof vetor);

  }

  for (int f = 1; f <= empregados; ++f)
  {
    vetorzao[f].clear();
  }

}

  return 0;
}
