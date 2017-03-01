#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
  
  string p;
  cin >> p;

  if(p.find('Q') != string::npos || p.find('H') != string::npos || p.find('9') != string::npos) printf("YES\n");
  else printf("NO\n");


  return 0;
}
