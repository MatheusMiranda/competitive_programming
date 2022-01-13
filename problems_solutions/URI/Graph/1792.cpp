#include <iostream>
#include <vector>
#include <cstring>
#include <map>

using namespace std;

#define MAX 10010
vector<int> vetorzao[MAX];
int soldados[MAX];
int refens[MAX];
int grau[MAX];
int visitados[MAX];
map<int,int> soldiers;
map<int,int> contra;


typedef struct Node {
  int id, friends, enemies, incoming;

  bool operator()(Node a, Node b) {
    if(a.enemies == b.enemies) {
      return a.friends < b.friends;
    } else {
      return a.enemies > b.enemies;
    }
  }
} Node;
Node node[MAXN];

priority_queue<Node, vector<Node>, Node> pq;

int main(){

  int m,n,s;

  scanf("%d %d %d",&n,&m,&s);

  while(true){

    if(n == 0 && m == 0 && s == 0) break;

    memset(grau,0,sizeof grau);
    memset(visitados,0,sizeof visitados);
    // memset(refens,0,sizeof refens);
    // memset(soldados,0,sizeof soldados);
    soldiers.clear();

    int sold,ref,origem,destino;

    for (int i = 1; i <= n; ++i)
    {
      scanf("%d",&sold);
      soldiers[i] = sold;
      contra[sold] = i;
    }

    for (int i = 1; i <= n; ++i)
    {
      scanf("%d",&ref);
      refens[i] = ref;
    }

    for (int i = 0; i < m; ++i)
    {
      scanf("%d %d",&origem,&destino);
      vetorzao[origem].push_back(destino);
      grau[destino]++;
    }

    int flag = 0,atual;
    int contador = 0;
    map<int,int>::iterator it;

    while(flag == 0){

        flag = 1;


      // for (it = contra.begin();it != contra.end();it++){
        while(!pq.empty()){

            it = pq.top();pq.pop();

            if(s < soldiers[it->second]){
              break;
            }

            if(grau[it->second] == 0 && visitados[it->second] == 0 && s > soldiers[it->second]){
                contador++;
                s+=refens[it->second];
                flag = 0;
                atual = it->second;
                // resposta.push_back(volta[i]);
                visitados[it->second] = 1;
                break;
            }

      }



      for(auto des : vetorzao[atual]){

        grau[des]--;

      }

    }

    if(contador == n){
      printf("possivel\n");
    }else{
      printf("impossivel\n");
    }

    scanf("%d %d %d",&n,&m,&s);
  }

  return 0;
}
