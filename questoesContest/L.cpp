#include <iostream>
#include <cstdio>

using namespace std;

int main(){

  int dias,soma = 0,hora,jornada;
  float media;

  scanf("%d",&dias);
  jornada = dias * 8;

  for (int i = 0; i < dias; ++i)
  {
    scanf("%d",&hora);
    soma += hora;
  }

  if(soma > jornada){
    printf("Banco de horas: %d hora(s)\n",soma - jornada);
  }else if(jornada == soma){
    printf("A jornada de trabalho foi cumprida corretamente\n");
  }else{
    printf("Horas a serem pagas: %d hora(s)\n",jornada - soma);
  }

  return 0;
}
