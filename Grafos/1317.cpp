#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
#include <string>

using namespace std;

#define MAX 21
#define MAX2 101

vector <int> vetorzao[MAX];
vector <string> vetorSolucao[MAX];

int main(){

  int nPessoas,p1,p2,t1,t2;
  string palavra,w1,w2,w3,pa;
  vector<string> nomes;
  queue<int> fila;
  int vetor[MAX];

  memset(vetor,0,sizeof vetor);

  scanf("%d",&nPessoas);
  while(nPessoas != 0){

      for (int i = 1; i <= nPessoas; ++i)
      {
        scanf("%d",&p2);
        while(p2 != 0){
          // printf("%d\n",p2);
          vetorzao[i].push_back(p2);
          scanf("%d",&p2);
        }

      }

      int quantidadeSpams;

      scanf("%d",&p1);
      while(p1 != 0){

        scanf("%d %d",&t1,&t2);

        cin >> w1 >> w2 >> w3;

        fila.push(p1);
        vetor[p1] = 1;

        while(!fila.empty()){

          quantidadeSpams = vetorzao[p1].size();


          if(quantidadeSpams < t1){
            vetorSolucao[p1].push_back(w1);
          }else if(quantidadeSpams >= t1 && quantidadeSpams < t2){
            vetorSolucao[p1].push_back(w2);
          }else{
            vetorSolucao[p1].push_back(w3);
          }

          for (int k = 0; k < quantidadeSpams; ++k)
          {
            if(vetor[vetorzao[p1][k]] == 0){
              vetor[vetorzao[p1][k]] = 1;
              fila.push(vetorzao[p1][k]);
            }
          }

          fila.pop();
          p1 = fila.front();

        }

        for (int o = 1; o <= nPessoas; ++o)
        {
          if(vetor[o] == 0){
            vetorSolucao[o].push_back(w1);
          }
        }

        memset(vetor,0,sizeof vetor);
        scanf("%d",&p1);
      }

      for (int q = 0; q < nPessoas; ++q)
      {
        cin >> pa;
        nomes.push_back(pa);
      }


      for (int b = 1; b <= nPessoas; ++b)
      {
          printf("%s: ",nomes[b-1].c_str());
          for (int c = 0; c < vetorSolucao[b].size(); ++c)
          {
              printf("%s ",vetorSolucao[b][c].c_str());
          }
          printf("\n");
      }

      //limpando dados;
      nomes.clear();

      for (int h = 1; h <= MAX; ++h)
      {
          vetorzao[h].clear();
          vetorSolucao[h].clear();
      }
      memset(vetor,0,sizeof vetor);

   scanf("%d",&nPessoas);
  }
  return 0;
}
