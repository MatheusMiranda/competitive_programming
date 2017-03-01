#include <iostream>
#include <cstdio>

using namespace std;

int main(){

  double vetor[100],num,aux;

  scanf("%lf",&num);
  vetor[0] = num;

  for (int i = 1; i < 100; ++i)
  {
    vetor[i] = (vetor[i - 1] / 2.0);
  }

  for(int j = 0;j<100;++j){

    printf("N[%d] = %.4lf\n",j,vetor[j]);

  }

  return 0;
}
