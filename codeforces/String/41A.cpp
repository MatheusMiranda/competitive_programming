#include <iostream>
#include <string>

using namespace std;

int main(){

  string s1,s2;
  cin >> s1 >> s2;
  int flag = 1;
  int tam = s1.size();
  tam--;
  for(int i = 0;i < s1.size();++i){
    if(s1[i] != s2[tam]){
      flag = 0;
    } 
    tam--;
  }  

  if(flag) printf("YES\n");
  else printf("NO\n");

  return 0;
}
