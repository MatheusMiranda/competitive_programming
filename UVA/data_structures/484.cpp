#include <bits/stdc++.h>

using namespace std;

map<int, int> dic;
vector<int> vet;

int main(){
  string linha;
  while(getline(cin, linha)){
    stringstream ss(linha);

    int x;

    while(ss >> x){
      if(dic[x] == 0){
        vet.push_back(x);
      }
      dic[x]++;
    }

  }
    for(auto el : vet){
      cout << el<<" "  << dic[el] << endl;
    }

  return 0;
} 
