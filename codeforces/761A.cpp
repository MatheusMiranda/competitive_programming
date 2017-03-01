#include <iostream>

using namespace std;

int main(){
  
  int a,b;

  cin >> a >> b;
  
  if(a == 0 && b == 0) cout << "NO\n";
  else {
    
    if(abs(a - b) >= 2) cout << "NO\n";
    else cout << "YES\n";

  } 

  return 0;
}
