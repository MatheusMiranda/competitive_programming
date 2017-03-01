#include <iostream>
#include <vector>

using namespace std;

int vet[100005];

int main(){

  long long a,b,c,d;
  scanf("%lld",&a);

  for(int i =0;i< a;++i){
    scanf("%lld",&b);
    vet[b] = i;
  }

  scanf("%lld",&c);
  long long conta = 0 ,contb = 0;
  long long proc;

  while(c--){
    scanf("%lld",&proc);
    conta+= vet[proc] + 1;
    contb+= a - vet[proc];
  } 

  printf("%lld %lld\n",conta,contb);

  return 0;
}
