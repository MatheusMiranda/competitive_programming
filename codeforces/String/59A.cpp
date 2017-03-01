#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>

using namespace std;

int main(){

  string palavra;

  cin >> palavra;

  int tam = palavra.size();

  int up =0;
  int low = 0;

  for(int i = 0;i < tam;++i){
    if(isupper(palavra[i])) up++;
    else low++;
  }  
  
  if(up > low){
    for(int i = 0;i < tam;++i){
    printf("%c",toupper(palavra[i]));
    }
  }
  else{
    for(int i = 0;i < tam;++i){
      printf("%c",tolower(palavra[i]));
    }
  }

  printf("\n");
  return 0;
}

