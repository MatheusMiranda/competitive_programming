#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

  int tamanho,consulta,numero,numDesejado,posicao;
  vector<int> vetor;
  map<int,vector<int> > mapa;

  cin >> tamanho;

  for (int i = 0; i < tamanho; ++i)
  {
    cin >> numero;

    if(mapa.find(numero) == mapa.end()){
      vetor.clear();
      vetor.push_back(i + 1);
      mapa.insert(pair<int,vector<int> >(numero,vetor));
    }
    else{

      mapa[numero].push_back(i + 1);

    }
  }

  map<int,vector<int> >::iterator it;

  for (it = mapa.begin(); it != mapa.end(); ++it)
  {
    for (int i = 0; i < it->second.size(); ++i)
    {
      cout << it->second[i] << " ";
    }
    cout << "\n";
  }

  return 0;
}
