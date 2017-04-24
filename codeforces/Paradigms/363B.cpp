#include <bits/stdc++.h>

using namespace std;

vector<int> vet;

int main(){

  int n,k,a;

  scanf("%d %d",&n,&k);

  int flag = 0;

  for(int i = 0;i < n;++i){
    scanf("%d",&a);
    vet.push_back(a);
  }

  int ind = 0;
  long long soma = 0;

  for(int i = 0;i < k;++i){
    soma += vet[i]; 
  }

  long long min = soma;

 
 
  if(vet.size() > 1){
    for(int i = 1;i <= vet.size() - k;++i){
     
      soma -= vet[i-1];    
      soma += vet[i + k - 1];
      if(soma < min){
        min = soma;
        ind = i;
      }

    } 

  }

  printf("%d\n",ind+1);

  return 0;
}
