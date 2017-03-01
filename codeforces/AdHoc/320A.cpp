#include <iostream>
#include <string>

using namespace std;

int main(){

  string palavra;
  cin >> palavra;
  int flag = 1;
  for(int i = 0;i < palavra.size();++i){
    if(palavra[i] ==  '1'){
      if(palavra[i+1] == '4' && palavra[i+2] == '4'){
        i+=2;
        continue;
      } 
      else if(palavra[i+1] == '4'){
        i+=1;
        continue;
      }else{
        continue;
      }  
    }
    else{
      flag = 0;
      break;
    }
  }  

  if(flag)printf("YES\n");
  else printf("NO\n");

  return 0;
}
