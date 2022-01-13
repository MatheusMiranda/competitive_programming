#include <iostream>
#include <string>

using namespace std;

int main(){

  string n;
  cin >> n;
  int tam = n.size();

  int cont = 0;
  for(int i = 0;i < tam;++i){
    if(n[i] == '7' || n[i] == '4') cont++;
  }

  string outra = to_string(cont);

  int flag = 1;
  for(int i = 0;i < outra.size();++i){
    if(outra[i] != '4' && outra[i] != '7'){
      flag = 0;
      break;
    }  
  }

  if(flag) printf("YES\n");
  else printf("NO\n");

  return 0;
}
