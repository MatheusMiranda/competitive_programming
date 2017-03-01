#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,n,m,soma = 0,maior,menor;
  scanf("%d %d",&n,&m);

  if(n>m){
    maior = n;
    menor = m;
  }
  else{
    maior = m;
    menor = n;
  }

  for (i = menor; i <= maior; ++i)
  {
    if(i%13!=0){
      soma += i;
    }
  }

  printf("%d\n",soma);

  return 0;
}
