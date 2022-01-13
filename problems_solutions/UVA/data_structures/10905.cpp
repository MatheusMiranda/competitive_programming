#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<vector<int> > vet;

bool func(const std::vector<int>& a, const std::vector<int>& b){
  for(int i  = 0;i <= max(a.size(),b.size());++i){
    if(a[i % a.size()] < b[i % b.size()]) return false;
    if(a[i % a.size()] > b[i % b.size()]) return true;
  }
  return false;
}


int main(){
  int n;
  string a;

  while(cin >> n,n){

    for(int i = 0;i < n;++i){
      cin >> a;
      vector<int> tmpVec;
      for( int j=0; j<a.size(); j++ ) {
        tmpVec.push_back(0);
      }
      vet.push_back(tmpVec);

      for(int j = 0;j < a.size();++j){
        vet[i][j] = a[j] - 48;
      }
    }

    sort(vet.begin(), vet.end(), func);

    for(int i = 0;i < n;++i){
      for(auto el : vet[i]){
        printf("%d",el);
      }
    }

    printf("\n");
    vet.clear();
  }

  return 0;
}
