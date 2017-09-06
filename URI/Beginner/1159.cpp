#include <iostream>
#include <cstdio>

using namespace std;

int main(){

  int numero,soma = 0;

  scanf("%d",&numero);

  while(numero != 0){

    for (int i = 0; i < 10; ++i)
    {
      if(numero%2==0){
        soma += numero;
      }
      numero++;
    }

    printf("%d\n",soma);
    soma = 0;

  scanf("%d",&numero);
  }

  return 0;
}
