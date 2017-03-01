#include <iostream>
#include <queue>
#include <algorithm>
#include <cstdio>

using namespace std;

bool functionQueue(int nota1,int nota2){

    return nota1 > nota2;

}

int main()
{
  int numCasos,numAlunos,nota,iguais = 0;
  vector<int> fila,filaDesordenada;

  scanf("%d",&numCasos);

  for (int i = 0; i < numCasos; ++i)
  {
      scanf("%d",&numAlunos);

      for (int i = 0; i < numAlunos; ++i)
      {
        scanf("%d",&nota);
        fila.push_back(nota);
      }

      filaDesordenada = fila;
      sort(fila.begin(),fila.end(),functionQueue);

      for (int i = 0; i < fila.size(); ++i)
      {
        if (fila[i] == filaDesordenada[i])
        {
          iguais++;
        }
      }

      printf("%d\n",iguais);
      iguais = 0;
      fila.clear();

  }


  return 0;
}
