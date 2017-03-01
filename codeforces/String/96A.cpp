#include <iostream>
#include <string>

using namespace std;

int main(){

  string linha;
  int cont = 0,flag = 0;

  cin >> linha;

  for(int i = 0;i < linha.size() - 1;++i){
    if(linha[i] == linha[i+1]){
      cont++;
    }else{
      cont = 0;
    } 

    if(cont == 6){
       flag = 1;
       break;
    }   
  } 

  if(flag)printf("YES\n");
  else printf("NO\n");
  
  return 0;
}
