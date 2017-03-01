#include <iostream>
#include <string>

using namespace std;

int main(){
  
  string linha;
  int n,t;

  cin >> n >> t;
  cin >> linha;

  while(t--){
    for(int i = 0;i < linha.size() - 1;++i){
      if(linha[i] == 'B' && linha[i+1] == 'G'){
        swap(linha[i],linha[i+1]);
        ++i;
      }
    }  
  }  

  cout << linha << endl;


  return 0;
}
