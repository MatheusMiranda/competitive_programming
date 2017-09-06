#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

typedef struct Camisa
{
  string nome;
  string cor;
  string tamanho;
}Camisas;

bool myfunction (Camisas camisa1,Camisas camisa2){

 if(camisa1.cor == camisa2.cor){

    if(camisa1.tamanho == camisa2.tamanho){

      return (camisa1.nome < camisa2.nome);

    }

  return (camisa1.tamanho > camisa2.tamanho);

 }

 return (camisa1.cor < camisa2.cor);

}

int main()
{

  int numeroDeCasos;
  string nome,cor,tamanho;
  vector<Camisas> vetorCamisas;
  Camisas camisa;

  cin >> numeroDeCasos;
  cin.ignore(1,'\n');

  while(numeroDeCasos != 0){

    vetorCamisas.clear();

    for (int i = 0; i < numeroDeCasos; ++i)
    {

      getline(cin,camisa.nome);
      cin >> camisa.cor >> camisa.tamanho;
      cin.ignore(1,'\n');

      vetorCamisas.push_back(camisa);

    }

    sort(vetorCamisas.begin(),vetorCamisas.end(),myfunction);

    for (int i = 0; i < vetorCamisas.size(); ++i)
    {
      cout << vetorCamisas[i].cor << " " << vetorCamisas[i].tamanho << " " << vetorCamisas[i].nome << "\n";
    }

    cin >> numeroDeCasos;
    if(numeroDeCasos != 0){

      cout << "\n";

    }
    cin.ignore(1,'\n');

  }

  return 0;
}
