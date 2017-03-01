#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main(){

  map<int,int> mapa;
  int n,numero,quan,pedidos,queroDistintas,quantidade,modelo,flag = 0;

  scanf("%d",&n);

  for (int i = 0; i < n; ++i)
  {
    scanf("%d %d",&numero,&quan);
    mapa[numero] = quan;
  }

  scanf("%d",&pedidos);

  for (int j = 0; j < pedidos; ++j)
  {
    scanf("%d",&queroDistintas);

    for (int i = 0; i < queroDistintas; ++i)
    {
      scanf("%d %d",&modelo,&quantidade);
      mapa[modelo] -= quantidade;
      if(mapa[modelo] < 0){
        flag = 1;
      }
    }

  }

  if(flag == 0){
    printf("A fabrica consegue atender todos os pedidos\n");
  }else{
    printf("A fabrica nao consegue atender todos os pedidos\n");
  }

  return 0;
}
