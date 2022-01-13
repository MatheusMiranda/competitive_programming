#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
  int numero,maior;
  string linha;//resposta;
  vector<char> resposta;
  map<char,int> dicionario;
  char letra;

  scanf("%d",&numero);
  getchar();

  for (int j = 0; j < numero; ++j)
  {
    maior = 1;
    letra = '.';
    getline(cin,linha);

    for (int i = 0; i < linha.size(); ++i)
    {
      linha[i] = tolower(linha[i]);
      if(isalpha(linha[i])){
        if(dicionario[linha[i]]){
           dicionario[linha[i]]++;
           if(dicionario[linha[i]]>maior){
            resposta.clear();
            maior = dicionario[linha[i]];
            letra = linha[i];
            resposta.push_back(linha[i]);
           }
           else if(dicionario[linha[i]] == maior && letra != linha[i]){
            resposta.push_back(linha[i]);
           }
        }
        else{
          dicionario[linha[i]] = 1;
          if(dicionario[linha[i]] == maior && letra != linha[i]){
            resposta.push_back(linha[i]);
          }
        }
      }
    }

    sort(resposta.begin(),resposta.end());

    for (int i = 0; i < resposta.size(); ++i)
    {
      printf("%c",resposta[i]);
    }
    printf("\n");

    resposta.clear();
    dicionario.clear();

  }

  return 0;
}
