#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

map<char,int> dic;

int main(){

  int n;
  string linha;
  scanf("%d",&n);

  cin >> linha;
  int tam = linha.size();

  int soma = 0;
  int counter = 0;
  
  for(int i = 0;i < tam;++i){
      
      if(i > 0){
        if(linha[i-1] == linha[i]){
          counter++;
        }  
        else{
          soma += counter;
          counter = 0;
        }  
      }
  }
  if(counter != 0) soma+= counter;
    
  printf("%d\n",soma);

  return 0;
}
