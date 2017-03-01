#include <iostream>
#include <cstdio>

using namespace std;

int main(){

  int n;

  scanf("%d",&n);

  if(n >= 5 && n <= 7){
    printf("Categoria: Infantil A\n");
  }else if(n >=8 && n <= 10){
    printf("Categoria: Infantil B\n");
  }else if(n >= 11 && n<=13){
    printf("Categoria: Juvenil A\n");
  }else if(n>=14 && n<=17){
    printf("Categoria: Juvenil B\n");
  }else if(n >= 18){
    printf("Categoria: Senior\n");
  }else{
    printf("O atleta nao tem idade suficiente para competir\n");
  }



 return 0;
}
