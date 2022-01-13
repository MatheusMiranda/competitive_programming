#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using par = pair<int,int>;

vector<par> vetorzao;

bool func(par a,par b ){
    if(a.first == b.first) return a.second < b.second;

    return a.first < b.first;
    
}  

int main(){

  int n,k;
  cin >> n >> k;
  int a,b;

  while(n--){
     cin >> a >> b;
     vetorzao.push_back(make_pair(a,b));
  }  

  sort(vetorzao.begin(),vetorzao.end(),func);

  int cont = 0;
  int ind;

  for(int i = 0;i < vetorzao.size();++i){
    if(vetorzao[i].first == vetorzao[k].first && vetorzao[i].second == vetorzao[k].second) ind = i;
  } 

  for(int j = ind;j < vetorzao.size();++j){
    if(vetorzao[j].first != vetorzao[k].first || vetorzao[j].second != vetorzao[k].second) break;
    cont++;
  }

  cout << cont << endl;

  return 0;
}
