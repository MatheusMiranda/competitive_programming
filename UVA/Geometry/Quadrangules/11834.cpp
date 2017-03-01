#include <iostream>

using namespace std;

int main(){
  
  long long a,b,c,d;
  long long h,w;
  long long soma;
  long long diam;

  while(cin >> a >> b >> c >> d,a | b | c | d){
    h= max(a,b);
    w = min(a,b);
  
    soma = 2 * c + 2 * d;
    diam = 2 * max(c,d);

    if(h >= soma && w >= diam)printf("S\n");
    else printf("N\n");

  }  

  return 0;
}
