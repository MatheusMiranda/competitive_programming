#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int numeroOp,fluxo;
  vetor<int> transacoes;

  scanf("%d %d",&numeroOp,&fluxo);

  while(numeroOp != 0 && fluxo != 0){

    for (int i = 0; i < numeroOp; ++i)
    {
      scanf("%d",&transacoes);
      transacoes.push_back(transacoes);
    }



    scanf("%d %d",&numeroOp,&fluxo);

  }

  return 0;
}
