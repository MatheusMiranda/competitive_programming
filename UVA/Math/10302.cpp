#include <iostream>

using namespace std;
using ll = unsigned long long;

int main(){
  ll n;
  
  while(scanf("%lld",&n) != EOF){
    cout << ((n * ( n + 1)) /2) * ((n * ( n + 1)) /2) << endl;
  }

  return 0;
}
