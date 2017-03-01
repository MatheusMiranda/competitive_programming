#include <stdio.h>

int main(){

  int n,n2,in = 0,out = 0,i;

  scanf("%d",&n);

  for(i = 0;i < n;++i){

    scanf("%d",&n2);
    if(n2 >= 10 && n2 <= 20){
      in++;
    }else{
      out++;
    }

  }

  printf("%d in\n",in);
  printf("%d out\n",out);

  return 0;
}
