#include <iostream>

using namespace std;

int main(){

  long long a,b,c;

  cin >> a >> b >> c;

  long long d,e;

  if(a % c == 0) d = a/c;
  else d = a/c + 1;

  if(b%c == 0) e = b/c;
  else e = b/c + 1;

  printf("%lld\n",e * d);
  
  return 0;
}
