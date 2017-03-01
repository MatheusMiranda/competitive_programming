#include <iostream>
#include <string>

using namespace std;

int main(){

  string p;
  int n;
  cin >> n;
  int cont = 0;

  while(n--){
    cin >> p;
    if(p == "++X" || p == "X++") cont++;
    else cont--;
  }  

  cout << cont << endl;

  return 0;
}
