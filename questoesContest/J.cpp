#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>

using namespace std;

int main(){

  string nome;
  char letra;

  cin >> nome;

  for (int i = 0; i < nome.size(); ++i)
  {
    if(i == 0){
      nome[i] = toupper(nome[i]);
    }else{
      nome[i] = tolower(nome[i]);
    }
  }

  cout << nome << endl;


  return 0;

}
