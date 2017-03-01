#include <string>
#include <iostream>
#include <map>
#include <cstring>

using namespace std;
map<char,int> dic;


int main(){

  dic['a'] = 1;
  dic['e'] = 1;
  dic['i'] = 1;
  dic['o'] = 1;
  dic['u'] = 1;
  dic['y'] = 1;
  dic['A'] = 1;
  dic['E'] = 1;
  dic['I'] = 1;
  dic['O'] = 1;
  dic['U'] = 1;
  dic['Y'] = 1;
  
  string p;
  cin >> p;

  for(int i = 0;i < p.size();++i){
    if(dic[p[i]])continue;

    printf(".%c",tolower(p[i]));
  }

  printf("\n");

  return 0;
}
