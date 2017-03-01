#include <iostream>
#include <vector>
#include <map>

using namespace std;
vector<int> vet,vet2;
map<int,int> dic;

int main(){

  int n,a;
  cin >> n;
  while(n--){ 
    cin >> a;
    vet.push_back(a);
  }

  cin >> n;
  while(n--){
    cin >> a;
    vet2.push_back(a);
  }

  for(int i = 0;i < vet2.size();++i){
    for(int j = 0;j < vet.size();++j){
      if(vet2[i]%vet[j] == 0){
          dic[vet2[i]/vet[j]]++;
      }          
    }  
  }  
  
  int maior = -1;
  int resp;
  for(auto s : dic){
    if(s.first > maior){
      maior = s.first;
      resp = s.second;
    }  
  }  

  cout << resp << endl;

  return 0;
}
