#include <bits/stdc++.h>

using namespace std;
using ll = long long;
map<int,int> dic, dic2,dic3;

int main(){
  int n;

  cin >> n;
  int a;

  for(int i = 0;i < n;++i){
    cin >> a; dic[a]++;
  }
  for(int i = 0;i < n-1;++i){
    cin >> a; dic2[a]++;
  }
  for(auto el : dic){
    if(el.second != dic2[el.first]) cout << el.first << endl;
  }
  for(int i = 0;i < n-2;++i){
    cin >> a; dic3[a]++;
  }
  for(auto el : dic2)
    if(el.second != dic3[el.first]) cout << el.first << endl;

  return 0;
}
