#include <iostream>

using namespace std;

int main(){

  int a,b,c;
  int n;

  cin >> n;
  int cont = 0;

  while(n--){
     cin >> a >> b >>c;
     if((a && b) || (a && c) || (b&&c))cont++;
  }  
  
  cout << cont << endl;

  return 0;
}
