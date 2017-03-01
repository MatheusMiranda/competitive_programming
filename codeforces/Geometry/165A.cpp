#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ponto = pair<int,int>;

vector<ponto> vet;

int main(){
  
  int n;
  scanf("%d",&n);
  int a = n;
  ponto p;
  while(a--){
    scanf("%d %d",&p.first,&p.second);
    vet.push_back(p);
  }
  
  int cont = 0;
  int z=0,k=0,l=0,m=0;

  for(int i  =0;i < n;++i){
      for(int j = 0;j < n;++j){
        if(i == j)continue;
        if(vet[i].first < vet[j].first && vet[i].second == vet[j].second) z = 1;
        if(vet[i].first > vet[j].first && vet[i].second == vet[j].second) k = 1;
        if(vet[i].second > vet[j].second && vet[i].first == vet[j].first) l = 1;
        if(vet[i].second < vet[j].second && vet[i].first == vet[j].first) m = 1;

    
      }
      if(z && k && l &&m) cont++;
      z=0,k=0,l=0,m=0;
  }

  cout << cont << endl;

  return 0;
}  
