#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
  
  string linha;
  while(getline(cin,linha)){
  string el;

  stringstream ss(linha);

  int cont = 0,let = 0;
  char ant = '#';

  int i = 0;

  while(ss >> el){
    if(i > 0){
  
    if(tolower(el[0]) == tolower(ant) && let == 0){
      cont++;
      let++;
    }else if(tolower(el[0]) != ant){
      let = 0;
    }

    }
    i++;

    
    ant = el[0];

    
  } 

  cout << cont << endl;

  }

  return 0;
}
