#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>
#include <cstdio>

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
  string palavra,linha;
  Palavra palavras;
  vector<Palavra> vetor;

  //cin >> numCasos;
  scanf("%d",&numCasos);
  cin.ignore(1,'\n');

  for (int i = 0; i < numCasos; ++i)
  {
    getline(cin,linha);
    vetor.clear();
    for (int j = 0; j < linha.length(); ++j)
    {

      if(j == (linha.length() - 1)){
        palavras.palavra += linha[j];
        palavras.indicePalavra = contador;
        vetor.push_back(palavras);
        palavras.palavra.clear();
        contador++;
      }
      else if(isalpha(linha[j])){
        palavras.palavra += linha[j];
      }
      else{
        palavras.indicePalavra = contador;
        vetor.push_back(palavras);
        palavras.palavra.clear();
        contador++;
      }
    }

    sort(vetor.begin(),vetor.end(),functionSort);

    printf("%s",vetor[0].palavra.c_str());
    for (int k = 1; k < vetor.size(); ++k)
    {
      //cout << vetor[k].palavra << " ";
      printf(" %s",vetor[k].palavra.c_str());
    }
      printf("\n");
      //cout << "\n";

  }

  return 0;
}
