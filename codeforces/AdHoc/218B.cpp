#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> vet;

int main(){
  int n,m;
  cin >> n >> m;
  int p;

  while(m--){
    cin >> p;
    vet.push_back(p);
  } 

  sort(p.begin(),p.end());

  long long min = 0,max = 0,ind = 0;
  int a = n,b = m;

  while(1){
    if(ind = m) break;
    if(a == 0) break;

    if(b > vet[ind]){
      for(int i = vet[ind];i > 0;--i) min+= i;
      b -= vet[ind];
      ind++;
      continue;
    }

    


  }

  a = m;
  


  return 0;
}
