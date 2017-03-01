#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main()
{
  int numeroPalavras,numeroCargos,salario,salarioFuncionario = 0;
  string cargo,palavra;
  map<string, int> dicionario;

  scanf("%d %d",&numeroPalavras,&numeroCargos);

  for (int i = 0; i < numeroPalavras; ++i)
  {
    cin >> cargo >> salario;
    dicionario[cargo] = salario;
  }

  for (int i = 0; i < numeroCargos; ++i)
  {
    palavra = "lala";
    while(palavra != "."){
        cin >> palavra;

        if(dicionario.find(palavra) != dicionario.end()){

          salarioFuncionario += dicionario[palavra];

        }
    }
          printf("%d\n",salarioFuncionario);
          salarioFuncionario = 0;

  }

  return 0;
}
