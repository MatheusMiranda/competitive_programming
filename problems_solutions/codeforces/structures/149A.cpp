#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vet;

bool func(int a, int b){
  return a > b;
}  

int main(){

  int n;
  cin >> n;
  int a;
  for(int i = 0;i < 12;++i){
    cin >> a;
    vet.push_back(a);
  }
  int cont = 0,soma = 0;
  sort(vet.begin(),vet.end(),func);
    
  for(int i = 0;i < 12;++i){
    if(soma >= n) break;
    soma += vet[i];
    cont++;
  }  
  
  if(soma < n) cout << "-1" << endl;
  else cout << cont << endl;

  return 0;
}
