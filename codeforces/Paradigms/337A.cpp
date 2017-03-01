#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> vet;

int main(){
  int n,m;
  cin >> n >> m;

  int a = m,num;
  while(a--){
    cin >> num;
    vet.push_back(num);
  }  

  sort(vet.begin(),vet.end());
  int menor = 1<< 30;
  if(vet.size() == 2)menor = vet[1] - vet[0];
  else{
  for(int i  =0;i < vet.size() - (n+1);++i){
     if(vet[i+(n-1)] - vet[i] < menor) menor = vet[i+(n-1)] - vet[i];
  }
  }

  cout << menor << endl;

  return 0;
}
