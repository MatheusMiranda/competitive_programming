#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

typedef struct Palavra
{
  string palavra;
  int indicePalavra;
}Palavra;

bool functionSort(Palavra palavra1,Palavra palavra2){

  if(palavra1.palavra.length() == palavra2.palavra.length()) return palavra1.indicePalavra < palavra2.indicePalavra;

  return palavra1.palavra.length() > palavra2.palavra.length();

}

int main()
{
  int numCasos,tamanho,contador = 1;
  string palavra,word;
  Palavra palavras;
  vector<Palavra> vetor;

  cin >> numCasos;
  cin.ignore(1,'\n');

  for (int i = 0; i < numCasos; ++i)
  {
    cin >> word;

    while(word != "\n"){

        palavras.palavra = word;
        palavras.indicePalavra = contador;
        vetor.push_back(palavras);
        contador++;
        cin >> word;
    }

    sort(vetor.begin(),vetor.end(),functionSort);

    for (int k = 0; k < vetor.size(); ++k)
    {
      cout << vetor[k].palavra << " ";
    }
      cout << "\n";

  }


  return 0;
}
