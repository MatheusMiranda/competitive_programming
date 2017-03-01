#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <map>
#include <string>

using namespace std;

#define MAX 110

//procurar os verticos com chegada igual a zero. quando se repete, pegar na ordem da entrada.
//usar fila de prioridades ao invés de uma fila comum
// int adj[MAX][MAX];
// int in[MAX,out[MAX];
vector<int> vetorzao[MAX];
int visitados[MAX];
int grau[MAX];
map<string,int> mapa;
map<int,string> volta;
vector<string> resposta;

int main(){

  int n,caso = 1;

  while(scanf("%d",&n) == 1){

    string palavra,inicio,destino;
    memset(visitados,0,sizeof visitados);
    memset(grau,0,sizeof grau);

    for (int i = 1; i <= n; ++i)
    {
      cin >> palavra;
      mapa[palavra] = i;
      volta[i] = palavra;
    }

    int m,a,b;
    scanf("%d",&m);

    for(int k = 0;k < m;++k){

      cin >> inicio >> destino;

      a = mapa[inicio];
      b = mapa[destino];
      vetorzao[a].push_back(b);
      grau[b]++;

    }

    int flag = 0,atual;

    while(flag == 0){

        flag = 1;
        for (int i = 1; i <= n; ++i)
        {
            if(grau[i] == 0 && visitados[i] == 0){
                flag = 0;
                atual = i;
                resposta.push_back(volta[i]);
                visitados[i] = 1;
                break;
            }

        }

      for(auto des : vetorzao[atual]){

        grau[des]--;

      }


    }

    printf("Case #%d: Dilbert should drink beverages in this order:",caso);

    for (int y = 0; y <resposta.size(); ++y)
    {
      printf(" %s",resposta[y].c_str());
    }

    printf(".\n");
    printf("\n");

    resposta.clear();
    mapa.clear();
    volta.clear();
    caso++;

    for (int i = 1; i <= n; ++i)
    {
      vetorzao[i].clear();
    }

  }

  return 0;
}
