#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> vet;

int main(){
 
      long long a,b,c;

      while(scanf("%lld %lld %lld",&a,&b,&c),a|b|c){

        vet.push_back(a);
        vet.push_back(b);
        vet.push_back(c);
        
        sort(vet.begin(),vet.end());

        if (vet[2] * vet[2] == vet[1] * vet[1] + vet[0] * vet[0])
          printf("right\n");
        else
          printf("wrong\n");

        vet.clear();
      }

  return 0;
}
