#include <bits/stdc++.h>

using namespace std;

#define MAX 100009

vector<int> vet;
vector<int> ups;
vector<int> downs;
int valids[MAX];

int main(){
  int n;
  cin >> n;


  int a;
  while(n--){
    cin >> a;
    vet.push_back(a);
  }
  sort(vet.begin(),vet.end());
  
  int init = vet[0];
  valids[0] = 1;
  int cont = 1;
  ups.push_back(vet[0]);

  for(int i = 1;i < vet.size();++i){
    if(vet[i] > init){
      cont++;
      ups.push_back(vet[i]);
      init = vet[i];
      valids[i] = 1;
    }
  }

  init = ups[ups.size() - 1];
  for(int i = vet.size() - 1;i >= 0;--i){
    if(!valids[i] and vet[i] < init){
      cont++;
      downs.push_back(vet[i]);
      init = vet[i];
    }
  }

  printf("%d\n",cont);

  for(int i = 0;i < ups.size();++i){
    if(!i) printf("%d",ups[i]);
    else printf(" %d",ups[i]);
  }
  for(int i  =0;i < downs.size();++i){
    printf(" %d",downs[i]);
  }
  printf("\n");

  return 0;
}
