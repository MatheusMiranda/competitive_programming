#include <iostream>
#include <cstdio>

using namespace std;

int main(){

  int numero,n2,soma = 0;

  scanf("%d",&numero);

  for (int i = 0; i < numero; ++i)
  {
    scanf("%d",&n2);
    soma += n2;
  }

  printf("Carga total: %d kilogramas\n",soma);

  return 0;
}
