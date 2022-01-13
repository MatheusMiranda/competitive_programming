#include <iostream>

using namespace std;

int main(){

  long long t;
  long long a,b,c;
  scanf("%lld",&t);
  int caso = 0;

  while(t--){
      scanf("%lld %lld %lld",&a,&b,&c);
      if(a + b > c && b + c > a && a + c > b){
        if(a == b && b == c)printf("Case %d: Equilateral\n",++caso);
        else if((a == b || b == c || a == c)) printf("Case %d: Isosceles\n",++caso);
        else printf("Case %d: Scalene\n",++caso);
      }
      else
        printf("Case %d: Invalid\n",++caso);
      
  }  

  return 0;
}
