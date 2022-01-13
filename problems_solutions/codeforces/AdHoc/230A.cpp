#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using par = pair<int,int>;
vector<par> vet;

bool func(par p1,par p2){
    if(p1.first == p2.first) return p1.second > p2.second;
    return p1.first < p2.first;
}   

int main(){
  
  int s,n,x,y;
  cin >> s >> n;
  
  while(n--){
    cin >> x >> y;
    vet.push_back(make_pair(x,y));
  }

  sort(vet.begin(),vet.end(),func);
  int flag = 1;
  
  for(int i = 0;i < vet.size();++i){
     if(vet[i].first >= s){
          flag = 0;
          break;
     }
     s += vet[i].second;
  } 

  if(flag) printf("YES\n");
  else printf("NO\n");

  return 0;
}
