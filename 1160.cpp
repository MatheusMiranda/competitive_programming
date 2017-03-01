#include <iostream>
#include <cstring>

using namespace std;

int main(){

  int t,PA,PB;
  double G1,G2;
  int a,b;
  int contador = 0;

  scanf("%d",&t);

  for(int i = 0; i < t;++i){

    scanf("%d %d %lf %lf",&PA,&PB,&G1,&G2);
    G1 = G1/100.0;
    G2 = G2/100.0;

    while(1){

        if(PA > PB) break;
        if(contador > 100) break;
        a = PA * G1;
        PA += a;
        b = PB * G2;
        PB += b;
        contador++;

    }

  if(contador > 100){
    printf("Mais de 1 seculo.\n");
  }else{
    printf("%d anos.\n",contador);
  }
  contador = 0;
  }


  return 0;
}
