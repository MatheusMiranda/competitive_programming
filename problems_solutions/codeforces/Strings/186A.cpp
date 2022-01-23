#include <string>
#include <iostream>
#include <map>

using namespace std;

map<char,int> dic;

int main(){
  
  string a,b;

  cin >> a >> b;
  int cont = 0;
  
  if(a.size() != b.size()) printf("NO\n");
  else{
    for(int i = 0;i < a.size();++i){
      if(a[i] != b[i]){
        cont++;
        dic[a[i]]++;
        dic[b[i]]++;
      }
    }

    if(cont == 2 && dic.size() == 2)printf("YES\n");
    else printf("NO\n");
  }

  return 0;
}
