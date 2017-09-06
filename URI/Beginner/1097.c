#include <stdio.h>
#include <stdlib.h>

int main(){

  int i = 1,j = 7,l;

  while(i<=9){
    for (l = 0; l < 3; ++l)
    {
      printf("I=%d J=%d\n",i,j);
      j-=1;
    }
    i+=2;
    j+=5;
  }

}
