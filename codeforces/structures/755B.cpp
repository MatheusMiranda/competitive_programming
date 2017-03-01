#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string,int> dic;

int main(){
    
  string p;
  int n,m,cont = 0;;

  cin >> n >> m;

  for(int i = 0;i < n;++i){
    cin >> p;
    dic[p]++;
  }  

  for(int i = 0;i < m;++i){
    cin >> p;
    dic[p]++;
    if(dic[p] == 2){
      cont++;
    }  
  } 

    if(cont % 2 != 0){
      if(n - cont + 1 > m - cont) printf("YES\n");
      else printf("NO\n");
    }else{
      if(n > m) printf("YES\n");
      else printf("NO\n");
    } 

  return 0;
}
