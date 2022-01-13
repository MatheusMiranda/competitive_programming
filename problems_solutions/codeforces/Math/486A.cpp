#include <iostream>

using namespace std;
using ll = long long;

int main(){
  ll a;
  scanf("%lld",&a);

  if(a % 2 == 0){
    printf("%lld\n",a/2);
  }else{
    printf("%lld\n",(a-1)/2 + (-a));
  }

  return 0;
}
