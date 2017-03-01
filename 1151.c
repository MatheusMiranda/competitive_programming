#include <stdio.h>
#include <stdlib.h>

int main(){

  int fib[47],numero,i;

  fib[0] = 0;
  fib[1] = 1;
  fib[2] = 1;

  scanf("%d",&numero);

  for (i = 0; i < numero; i++)
  {
    if(i == 0 || i == 1 || i == 2){

      printf("%d",fib[i]);

    }else{
      fib[i] = fib[i-1] + fib[i-2];
      printf("%d",fib[i]);
    }
    if(i != numero - 1){
      printf(" ");
    }else{
      printf("\n");
    }
  }

  return 0;
}
