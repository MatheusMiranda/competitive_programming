#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> vet;

int main(){
  
  int n,m;
    cin >> n >> m;
  int a;

  while(n--){
      cin >> a;
      vet.push_back(a);
  }

  sort(vet.begin(),vet.end());

  long long soma = 0;
  for(int i = 0;i < m;++i){
    if(vet[i] > 0) break;
    soma += vet[i];
  } 

  printf("%lld\n",abs(soma));

  return 0;
}
