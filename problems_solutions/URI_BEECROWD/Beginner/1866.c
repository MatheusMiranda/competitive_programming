#include <stdio.h>
#include <stdlib.h>

int main(){

  int i,casos,numero;

  scanf("%d",&casos);

  for (i = 0; i < casos; ++i)
  {
    scanf("%d",&numero);

    if(numero%2==0) printf("0\n");
    else printf("1\n");

  }

}
