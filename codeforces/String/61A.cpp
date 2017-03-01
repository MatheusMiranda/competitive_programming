#include <iostream>
#include <string>

using namespace std;

int main(){

  string linha1,linha2;

  cin >> linha1 >> linha2;

  int tam= linha1.size();

  for(int i =0;i < tam;++i){
    if(linha1[i] == linha2[i])cout << '0';
    else cout << '1';
  }  

  cout << endl;

  return 0;
}
