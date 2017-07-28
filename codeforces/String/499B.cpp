#include <bits/stdc++.h>

using namespace std;

map<string,string> i;

vector<string> vet;

int main(){
  int n,m;
  scanf("%d %d",&n,&m);

  string a,b;
  while(m--){
    cin >> a >> b;
    i[a] = b;
    i[b] = a;
  }

  while(n--){
    cin >> a;
    vet.push_back(a);    
  } 

  int cont = 0;
  for(auto el : vet){
    if(cont++) printf(" ");
    cout << ((i[el].size() < i[i[el]].size())? i[el] : i[i[el]]);
  }

  cout << endl;

  return 0;
}
