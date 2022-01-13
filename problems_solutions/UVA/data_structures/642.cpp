#include <bits/stdc++.h>

using namespace std;
vector< map<char,int> > vet;
map<char,int> dic2;
vector<string> palavras;

int main(){
  string p;

  while(1){
    cin >> p;
    if(p == "XXXXXX") break;
    map<char,int> dic2;

    for(auto el : p){
      if(dic2[el]) dic2[el]++;
      else dic2[el] = 1;
    }
    vet.push_back(dic2);
    palavras.push_back(p);
  }

  while(1){
    cin >> p;
    if(p == "XXXXXX") break;
 
    dic2.clear();
    for(auto el : p){
      if(dic2[el]) dic2[el]++;
      else dic2[el] = 1;
    }

    int cont = 0;
    vector<string> aux;
    for(auto el : vet){
      if(el == dic2){
        aux.push_back(palavras[cont]);
      }
      cont++;
    }
    
    sort(aux.begin(),aux.end());
    for(auto el : aux) cout << el << endl;
  
    if(aux.size() == 0) cout << "NOT A VALID WORD" << endl;
    cout << "******" << endl;
  }
  
}
