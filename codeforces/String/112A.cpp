#include <string>
#include <iostream>

using namespace std;

int main(){

  string a,b;

  cin >> a >> b;

  for(int i = 0;i < a.size();++i){
     a[i] = tolower(a[i]);
     b[i] = tolower(b[i]);
  }  

  if(a > b) printf("1\n");
  else if(a < b) printf("-1\n");
  else printf("0\n");

  return 0;
}
