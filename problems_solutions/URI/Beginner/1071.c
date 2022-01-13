#include <stdio.h>
#include <stdlib.h>

int main(){

  int n,m,i,maior,menor,soma = 0;
  scanf("%d %d",&n,&m);

  if(n>m){
    maior = n;
    menor = m;
  }else{
    maior = m;
    menor = n;
  }

  for (i = menor + 1; i < maior; i++)
  {
    if(i%2!=0){
      soma += i;
    }
  }

  printf("%d\n",soma);

  return 0;
}
