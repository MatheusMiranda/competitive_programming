#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){

  string palavra1,palavra2,palavra3;
  cin >> palavra1 >> palavra2 >> palavra3;

  if(palavra1 == "vertebrado"){

    if(palavra2 == "ave"){

      if(palavra3 == "carnivoro"){
        printf("aguia\n");
      }
      else{
        printf("pomba\n");
      }

    }
    else{

      if(palavra3 == "onivoro"){
        printf("homem\n");
      }
      else{
        printf("vaca\n");
      }

    }

  }
  else{

    if(palavra2 == "inseto"){

      if(palavra3 == "hematofago"){
        printf("pulga\n");
      }
      else{
        printf("lagarta\n");
      }

    }
    else{

      if(palavra3 == "hematofago"){
        printf("sanguessuga\n");
      }else{
        printf("minhoca\n");
      }
    }

  }
  return 0;

}
