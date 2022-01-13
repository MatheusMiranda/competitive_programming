#include <iostream>
#include <vector>

using namespace std;
using par = pair<int,int>;

vector<par> vet;

int main(){

  int n,p,c;
  cin >> n;
  int a =n;
      

  while(a--){
    cin >> p >> c;
    vet.push_back(make_pair(p,c));
  }

  bool flag = false;

  for(int i =0 ;i < n;++i){
    if(flag) break;

    for(int j = 0;j < n;++j){
      if(i == j) continue;
      par p1 = vet[i];
      par p2 = vet[j];
  
 
      if(p1.first + p1.second == p2.first && p2.first + p2.second == p1.first){
        flag = true;
        break;
      }
    }
  }

  if(flag) printf("YES\n"); 
  else printf("NO\n");

  return 0;
}
