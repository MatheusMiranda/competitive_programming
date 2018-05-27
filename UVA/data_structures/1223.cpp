#include <bits/stdc++.h>

using namespace std;
map<string, string> dic;

int main(){
  string linha;
  while(getline(cin,linha)){
    if(linha == "") break;
    stringstream ss(linha);
    string x;

    vector<string> vet;
    while(ss >> x){
      vet.push_back(x);
    }
    dic[vet[1]] = vet[0];
  }
  
  while(cin >> linha){
    if(dic[linha] != "") cout << dic[linha] << endl;
    else cout << "eh" << endl;
  }

  return 0;
}
