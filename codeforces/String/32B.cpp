#include <iostream>
#include <string>

using namespace std;

int main(){

  string linha;

  cin >> linha;

  int tam = linha.size();

  for(int i = 0;i < tam;++i){ 
    if(linha[i] == '.') printf("0");
    else{
      if(linha[i+1] == '.'){
        printf("1");
        i++;
      }else{
        printf("2");
        i++;
      }  
    }   
  }

  printf("\n");

  return 0;
}
