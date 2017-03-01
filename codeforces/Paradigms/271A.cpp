#include <iostream>
#include <string>

using namespace std;

bool verifica(string t){
  if(t[0] != t[1] && t[0] != t[2] && t[0] != t[3] && t[1] != t[2] && t[1] != t[3] && t[2] != t[3]) return true;
  else return false;
}  

int main(){
  
  int n;
  string num;

  cin >> num;

  for(int i = 0;i < 9000;++i){
    n = atoi(num.c_str());
    n+=1;
    num = to_string(n);

    if(verifica(num)){
       break; 
    }

  }  
  
  printf("%s\n",num.c_str());

  return 0;
}
