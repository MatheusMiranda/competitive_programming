#include <iostream>
#include <cstdio>

using namespace std;

int main(){

  int i,entrou = 0;

  scanf("%d",&i);

  printf("%d horas de tratamento:\n",i);


    if(i%3 == 0){
      printf("Troca do soro\n");
      entrou = 1;
    }if(i%5 == 0){
      printf("Injecao de antibioticos\n");
      entrou = 1;
    }if(i%12 == 0){
      printf("Reavaliacao\n");
      entrou = 1;
    }
    if(entrou == 0){
      printf("Monitoramento dos sinais vitais\n");
    }
    entrou = 0;



  return 0;
}
