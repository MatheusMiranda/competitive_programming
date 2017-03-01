#include <stdio.h>
#include <stdlib.h>

int main(){

  float i,soma = 0;

  for (i = 1; i <= 100; i++)
  {
    soma += 1/i;
  }

  printf("%.2f\n",soma);

  return 0;
}
