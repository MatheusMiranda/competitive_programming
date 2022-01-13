#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

map<char,int> p1,p2;
char letras[26];

int main(){
  
  string a,b;
  char letra;
  int vezes;

  for(int i = 0;i < 26;++i){
    letra = 'a' + i;
    letras[i] = letra;
  }

  while(getline(cin,a),getline(cin,b)){

    for(int i = 0;i < a.size();++i){
      p1[a[i]]++;
    }
    for(int i = 0;i < b.size();++i){
      p2[b[i]]++;
    }

    for(int i = 0;i < 26;++i){
      char my_char = letras[i];
  
      vezes = min(p1[my_char],p2[my_char]);
      for(int j = 0;j < vezes;++j) printf("%c",letras[i]);
    }

    printf("\n");

    p1.clear();
    p2.clear();
  }

  return 0;
}
