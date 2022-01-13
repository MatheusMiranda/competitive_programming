#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){

  int numero;
  string vetor;

  scanf("%d",&numero);

  for (int i = 0; i < numero; ++i)
  {
    if(i == 0){
      vetor+='1';
    }else if(i == numero - 1){
      vetor+='2';
    }else{
      vetor+='3';
    }
  }

  int aux =

  for (int j = 0; j < 4; ++j)
  {

      printf("%s\n",vetor.c_str());

  }

  return 0;
}
