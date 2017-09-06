#include <stdio.h>

int main()
{
  int a,b,c,d,e,contador = 0;
  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

  if(a%2 == 0){
    contador++;
  }
  if(b%2 == 0){
    contador++;
  }
  if(c%2 == 0){
    contador++;
  }
  if(d%2 == 0){
    contador++;
  }
  if(e%2 == 0){
    contador++;
  }

  printf("%d valores pares\n",contador);

  return 0;
}
