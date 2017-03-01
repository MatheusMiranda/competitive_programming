#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>

using namespace std;

int main(){

  string nome,sobrenome;
  char letra;

  for (int i = 0; i < 200; ++i)
  {
    scanf("%c",&letra);
    while(letra != ','){
      sobrenome.push_back(letra);
      scanf("%c",&letra);
    }
    break;
  }

  cin >> nome;


  for (int i = 0; i < sobrenome.size(); ++i)
  {
    if(i != 0){
      sobrenome[i] = tolower(sobrenome[i]);
    }
  }

  for (int j = 0; j < nome.size(); ++j)
  {
    if(j != 0){
      nome[j] = tolower(nome[j]);
    }
  }

  cout << nome << " " << sobrenome << endl;

  return 0;
}
