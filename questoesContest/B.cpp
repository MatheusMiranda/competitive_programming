#include <iostream>
#include <cstdio>

using namespace std;

int main(){

  int n,soma = 0;

  for (int i = 0; i < 4; ++i)
  {
    scanf("%d",&n);
    soma += n;
  }

  printf("Total de eleitores: %d\n",soma);


  return 0;
}
