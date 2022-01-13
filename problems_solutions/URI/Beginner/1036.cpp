#include <iostream>
#include <cstdio>

using namespace std;

int main(){

  double salario,imposto,taxa = 0,aux;

  scanf("%lf",&salario);

  if(salario >= 0.0 && salario <= 2000.0){
    printf("Isento\n");
  }else{

    if(salario > 4500){
      imposto = 0.28;
      aux = salario;
      aux -= 4500;
      taxa += (imposto * aux);
      salario -= aux;
    }
    if(salario > 3000.0 && salario <= 4500.0){
      imposto = 0.18;
      aux = salario;
      aux -= 3000.00;
      taxa += (imposto * aux);
      salario -= aux;
    }
    if(salario > 2000.0 && salario <= 3000){
    imposto = 0.08;
    aux = salario;
    aux -= 2000.00;
    taxa += (imposto * aux);
    }

  printf("R$ %.2lf\n",taxa);
  }


  return 0;
}
