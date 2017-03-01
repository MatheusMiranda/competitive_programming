#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

map<long long,long long> dic;
vector<long long> vet;

int main(){
  long long n,a;
  cin >> n;
   
  while(n--){
    cin >> a;
    vet.push_back(a);
    dic[a]++;
  }

  sort(vet.begin(),vet.end());

  if(dic.size() == 1) cout << vet[vet.size()-1] - vet[0] << " " << (dic[vet[0]] * (dic[vet[0]] - 1)) / 2 << endl;
  else cout << vet[vet.size()-1] - vet[0] << " "  << dic[vet[vet.size() - 1]] * dic[vet[0]] << endl; 

  return 0;
}
