#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
  int qtdeNumeros,numeroTurnos,aux,permutacoes = 0,permutPorTurno,j;
  vector<int> vetor;

  scanf("%d %d",&qtdeNumeros,&numeroTurnos);

  while(qtdeNumeros != 0 && numeroTurnos != 0){

    for (int i = 1; i <= qtdeNumeros; ++i)
    {
      vetor.push_back(i);
    }

    for (int i = 0; i < numeroTurnos; ++i)
    {
      //for (int j = 1; j <= permutPorTurno; ++j)

      scanf("%d",&permutPorTurno);
      j = 1;
      while(permutacoes < permutPorTurno){

        if(vetor[j-1] < vetor[j]){
          aux = vetor[j];
          vetor[j] = vetor[j-1];
          vetor[j-1] = aux;
          permutacoes++;
        }
        j++;
      }
      permutacoes = 0;
      j = 1;
    }

   for (int i = 0; i < vetor.size(); ++i)
   {
     cout << vetor[i];
   }
   cout << "\n";
   vetor.clear();
   permutacoes = 0;

   scanf("%d %d",&qtdeNumeros,&numeroTurnos);

  }

  return 0;
}

