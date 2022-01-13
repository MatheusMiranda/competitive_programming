#include <iostream>
#include <string>

using namespace std;

int main(){
  
  string p;
  cin >> p;
  int flag = false;

  for(int i =0;i < p.size();++i){
    if(p[i] == '0' && flag == false){
      flag = true;
      continue;
    }
    if(flag == false && i == p.size() - 1)continue;
    printf("%c",p[i]);    
  }

  cout << endl;

  return 0;
}
