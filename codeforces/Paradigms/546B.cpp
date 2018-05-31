#include <bits/stdc++.h>

using namespace std;
vector<int> vet;

int main(){
  int n;
  cin >> n;
  int a;
  
  while(n--){
    cin >> a;
    vet.push_back(a);
  }

  int cont = 0;
  int ind = 1;
  
  sort(vet.begin(),vet.end());

  for(int i =0;i < vet.size();++i){
    ind = vet[i];
    for(int j = i+1;j < vet.size();++j){
      if(vet[j] == ind){
        cont++;
        vet[j]+=1;
      }
    }
  }

  cout << cont << endl;

  return 0;
}
