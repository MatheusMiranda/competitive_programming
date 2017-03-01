#include <iostream>
#include <vector>

using namespace std;

vector<int> vet;

int main(){

  long long n;
  long long a;

  while(scanf("%lld",&n) != EOF){
      if(n == -999999)break;
      
      vet.push_back(n);

      while(1){
        scanf("%lld",&a);
        if(a == -999999) break;
        vet.push_back(a);
      } 

      int n = vet.size();

      int p=0,m=0,r=0;
      if(n==1) r=vet[0];
      else 
        for(int i=0;i<n;i++){
          p=max(1,p)*vet[i];
          m*=vet[i];
          if(p<0) swap(p,m);
          r=max(p,r);
        }

      printf("%lld\n",r);

      vet.clear();

  }  

  return 0;
}
