#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <cstdio>

using namespace std;

#define MAX 101
vector<int> vetorzao[MAX];
int visitados[MAX];
vector<int> resposta;
int grau[MAX];

int main(){

  int m,n;

  scanf("%d %d",&n,&m);

  while(m != 0 && n != 0){

    int p,q;
    memset(visitados,0,sizeof visitados);
    memset(grau,0,sizeof grau);

    for (int l = 0; l < m; ++l)
    {
       scanf("%d %d",&p,&q);
       vetorzao[p].push_back(q);
       grau[q]++;
    }


    int flag = 0,atual;

    while(flag == 0){

        flag = 1;
        for (int i = 1; i <= n; ++i)
        {
            if(grau[i] == 0 && visitados[i] == 0){
                flag = 0;
                atual = i;
                resposta.push_back(i);
                visitados[i] = 1;
                break;
            }

        }

      for(auto des : vetorzao[atual]){

        grau[des]--;

      }


    }


    for (int i = 0; i < resposta.size(); ++i)
    {
      if((i!=resposta.size() - 1)){
        printf("%d ",resposta[i]);
      }else{
        printf("%d\n",resposta[i]);
      }
    }

    printf("\n");

    resposta.clear();

    for (int i = 1; i <= n; ++i)
    {
      vetorzao[i].clear();
    }

    scanf("%d %d",&n,&m);
  }


  return 0;
}
