#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){

  string linha;
  cin >> linha;

  int tam = linha.size();
  
  printf("%c",toupper(linha[0]));
  for(int i = 1;i < tam;++i){
    cout << linha[i];
  }

  cout << endl;

  return 0;
}
