#include <stdio.h>

int main()
{

  float codigo,numero;

  scanf("%f %f",&codigo,&numero);

  if(codigo == 1) printf("Total: R$ %.2f\n",4.00 * numero);
  if(codigo == 2) printf("Total: R$ %.2f\n",4.50 * numero);
  if(codigo == 3) printf("Total: R$ %.2f\n",5.00 * numero);
  if(codigo == 4) printf("Total: R$ %.2f\n",2.00 * numero);
  if(codigo == 5) printf("Total: R$ %.2f\n",1.50 * numero);

  return 0;
}
