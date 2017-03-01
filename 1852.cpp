#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

typedef struct Stark
{
  int indice;
  string nome;
}Stark;

int main(int argc, char const *argv[])
{
  Stark stark;
  int numero;
  map<string,vector<Stark> > mapa;
  string palavraInicial,palavra;

  scanf("%d",&numero);

  for (int i = 0; i < n*2; ++i){

    cin >> palavraInicial;

      for (int i = 0; i <= numero; ++i)
      {
        cin >> palavra;
        stark.nome = palavra;
        stark.indice = i;
        mapa[palavraInicial].push_back(stark);
      }

  {




  }

  return 0;
}
