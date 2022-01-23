#include <string>
#include <iostream>
#include <set>

using namespace std;
set<char> s;

int main(){

  string p;
  cin >> p;

  for(int i = 0;i < p.size();++i){
    s.insert(p[i]);
  }

  if(s.size()%2 == 0)printf("CHAT WITH HER!\n");
  else printf("IGNORE HIM!\n");

  return 0;
}
