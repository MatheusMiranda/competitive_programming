#include <bits/stdc++.h>

using namespace std;
vector<int> vet;

int main(){
  int n;
  cin >> n;
  int a;
  vet.push_back(0);
  for(int i = 0;i < n;++i){
    cin >> a;
    vet.push_back(a);
  }

  int resp = n-1;
  while(vet[resp] < vet[resp+1] and resp > 0) resp--;

  cout << resp << endl;
  
  return 0;
}
