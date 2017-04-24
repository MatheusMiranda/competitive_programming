#include <string>
#include <iostream>
#include <regex>

using namespace std;

int main(){

  string p;
  smatch m;
  regex pat("^(\\+|\\-)?\\d+(((e|E)(\\+|\\-)?\\d+$)|((\\.\\d+)((e|E)(\\+|-)?\\d+)?$))");

  while(1){
    cin >> p;
    if(p == "*") break;  

    bool teste = regex_search(p,m,pat);

    if(teste){
      cout << p << " is legal." << endl; 
    }else{
      cout << p << " is illegal." << endl;
    }

  }

  return 0;
}
