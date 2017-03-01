#include <iostream>
#include <cstdio>

int main()
{
  int nRod,nJog,numeroMax,soma = 0,melhorResultado = 0,numD,num,vetor[5] = {1,10,100,1000,10000};
  scanf("%d %d",&nJog,&nRod);

  for (int i = 0; i < nRod; ++i)
  {
    scanf("%d",&numeroMax);
    for (int j = 0; j < nJog; ++j)
    {
      scanf("%d",&num);
      if(j == 0)  numD = num;
      soma+=num;
    }

    //if(soma > numeroMax){

      for (int k = 0; k < 5; ++k)
      {
        if(numD == 1 && soma > numeroMax){
          soma = 0;
          break;
        }

        soma-=numD;
        soma+=vetor[k];
        numD = vetor[k];

        if(k == 0 && soma>numeroMax){

          soma = 0;
          break;
        }
        if(soma > numeroMax){
          soma-=vetor[k];
          soma+=vetor[k-1];
          break;
        }
      }

      printf("%d\n",soma);
      melhorResultado += soma;

    soma = 0;

  }

  printf("%d\n",melhorResultado);

  return 0;
}
