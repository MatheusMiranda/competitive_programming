#include <stdio.h>

int main()
{

  float numero;
  int i;

  for (i = 0; i < 100; ++i)
  {
    scanf("%f",&numero);
    if(numero <= 10){
      printf("A[%d] = %.1f\n",i,numero);
    }
  }

  return 0;
}
