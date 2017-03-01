#include <iostream>
#include <cstdio>

using namespace std;

int main(){

  int n;

  scanf("%d",&n);

  if(n >= 18 && n < 70){
    printf("Alistamento obrigatorio\n");
  }else if(n < 18){

    if(n >= 16){
      printf("Alistamento facultativo\n");
    }else{
      printf("Nao pode se alistar\n");
    }

  }else{
    printf("Alistamento facultativo\n");
  }




  return 0;

}
