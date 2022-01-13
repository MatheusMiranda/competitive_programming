#include <stdio.h>
#include <stdlib.h>

int main(){

  double valor,reajuste,add,novoSalario;

  scanf("%lf",&valor);

  if(valor > 0 && valor <= 400.0){

    reajuste = 0.15;
    add = reajuste * valor;
    novoSalario = add + valor;

    printf("Novo salario: %.2lf\n",novoSalario);
    printf("Reajuste ganho: %.2lf\n",add);
    printf("Em percentual: %d %%\n",(int)(reajuste * 100.0));

  }else if(valor > 400.0 && valor <= 800.0){
    reajuste = 0.12;
    add = reajuste * valor;
    novoSalario = add + valor;

    printf("Novo salario: %.2lf\n",novoSalario);
    printf("Reajuste ganho: %.2lf\n",add);
    printf("Em percentual: %d %%\n",(int)(reajuste * 100.0));
  }else if(valor > 800.0 && valor <= 1200.0){
    reajuste = 0.10;
     add = reajuste * valor;
    novoSalario = add + valor;

    printf("Novo salario: %.2lf\n",novoSalario);
    printf("Reajuste ganho: %.2lf\n",add);
    printf("Em percentual: %d %%\n",(int)(reajuste * 100.0));
  }else if(valor > 1200.0 && valor <= 2000.0){
    reajuste = 0.07;
     add = reajuste * valor;
    novoSalario = add + valor;

    printf("Novo salario: %.2lf\n",novoSalario);
    printf("Reajuste ganho: %.2lf\n",add);
    printf("Em percentual: %d %%\n",(int)(reajuste * 100.0));
  }else{
    reajuste = 0.04;
     add = reajuste * valor;
    novoSalario = add + valor;

    printf("Novo salario: %.2lf\n",novoSalario);
    printf("Reajuste ganho: %.2lf\n",add);
    printf("Em percentual: %d %%\n",(int)(reajuste * 100.0));
  }

  return 0;

}
