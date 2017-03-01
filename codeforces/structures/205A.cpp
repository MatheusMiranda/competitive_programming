#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using par = pair<int,int>;
vector<par> vet;

int main(){

  int n,a;
  cin >> n;
  for(int i = 0;i < n;++i){
    cin >> a;
    vet.push_back(make_pair(a,i));
  }

  sort(vet.begin(),vet.end());

  if(vet[0].first == vet[1].first) printf("Still Rozdil\n");
  else printf("%d\n",vet[0].second + 1);

  return 0;
}
