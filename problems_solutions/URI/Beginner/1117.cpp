#include <iostream>
#include <cstdio>

using namespace std;

int main(){

  int n1,n2,soma = 0,maior,menor;

  scanf("%d %d",&n1,&n2);

  while(n1 > 0 && n2 > 0){

    if(n2 > n1){
      maior = n2;
      menor = n1;
    }else{
      maior = n1;
      menor = n2;
    }
    for (int i = menor; i <= maior; ++i)
    {
      printf("%d ",i);
      soma += i;
    }
    printf("Sum=%d\n",soma);
    soma = 0;
    scanf("%d %d",&n1,&n2);
  }


  return 0;
}
