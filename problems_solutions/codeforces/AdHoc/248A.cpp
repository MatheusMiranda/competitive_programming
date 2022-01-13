#include <iostream>

using namespace std;

int main(){

  int n;
  cin >> n;

  int l = 0,r = 0;
  int a,b;
  int z = n;
  while(n--){
     cin >> a >> b;
      l+=a;r+=b;
  } 

  printf("%d\n",min(l,z-l) + min(r,z-r));
  
  return 0;
}  
