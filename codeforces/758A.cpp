#include <iostream>
#include <vector>

using namespace std;

vector<int> vet;

int main(){
  int n,a;
  cin >> n;
  int maior = -1;

  while(n--){
    cin >> a;
    vet.push_back(a);
    if(a > maior)maior = a;
  }
  
  int soma = 0;

  for(auto i : vet){
    if(i < maior){
      soma += maior - i;
    }  
  }

  cout << soma << endl;

  return 0;
}
