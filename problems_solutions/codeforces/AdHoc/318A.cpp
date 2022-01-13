#include <iostream>

using namespace std;

int main(){
  
  long long n,k;
  scanf("%lld %lld",&n,&k);
  n = (n+1)/2;
  printf("%lld\n",k >n?(k - n) *2:(k*2) - 1);

  return 0;
}
