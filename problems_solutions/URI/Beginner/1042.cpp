#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

  int numero;

  vector<int> vetorLido,vetorOrdenado;

  for (int i = 0; i < 3; ++i)
  {
    cin >> numero;
    vetorLido.push_back(numero);
  }

  vetorOrdenado = vetorLido;

  sort(vetorOrdenado.begin(),vetorOrdenado.end());

  vector<int>::iterator itOrdenado = vetorOrdenado.begin(),itLido = vetorLido.begin();

  for (vector<int>::iterator itOrdenado = vetorOrdenado.begin(); itOrdenado != vetorOrdenado.end(); ++itOrdenado)
  {
    cout << *itOrdenado << "\n";
  }
  cout << "\n";
  for (vector<int>::iterator itLido = vetorLido.begin(); itLido != vetorLido.end(); ++itLido)
  {
    cout << *itLido << "\n";
  }

  return 0;
}
