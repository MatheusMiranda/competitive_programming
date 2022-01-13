#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> vet;

int main(){
  
  string soma;
  cin >> soma;
  for(int i  =0;i < soma.size();++i){
    if(soma[i] != '+') vet.push_back(((int)soma[i]) - 48);
  }

  sort(vet.begin(),vet.end());

  cout << vet[0];
  for(int i =1;i< vet.size();++i){
    printf("+%d",vet[i]);
  } 

  printf("\n");

  return 0;
}
