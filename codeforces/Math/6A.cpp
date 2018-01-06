#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;

vector<int> lados;

bool test_degenerate(){
  for(int i = 0;i < 4;i++){
    for(int j = 0;j < 4;++j){
      for(int k = 0;k < 4;++k){
        if(i == j || i == k || k == j) continue;
        ll z = lados[i],x = lados[j], c = lados[k];
        if(z + x > c || x + c > z || z + c > x) return true;
      }
    }
  }
  return false;
}
bool test_segment(){
  for(int i = 0;i < 4;i++){
    for(int j = 0;j < 4;++j){
      for(int k = 0;k < 4;++k){
        if(i == j || i == k || k == j) continue;
        ll z = lados[i],x = lados[j], c = lados[k];
        if(z + x == c || x + c == z || z + c== x) return true;
      }
    }
  }
  return false;
}
bool test_normal(){
  for(int i = 0;i < 4;i++){
    for(int j = 0;j < 4;++j){
      for(int k = 0;k < 4;++k){
        if(i == j || i == k || k == j) continue;
        ll z = lados[i],x = lados[j], c = lados[k];
        if(z + x > c && x + c > z && z + c > x){
          return true;
        }
      }
    }
  }
  return false;
}

int main(){
  ll a,b,c,d;

  cin >> a >> b >> c >> d;

  lados.push_back(a);
  lados.push_back(b);
  lados.push_back(c);
  lados.push_back(d);

  bool normal = test_normal();
  bool seg = test_segment();
  bool deg = test_degenerate();

  if(normal) cout << "TRIANGLE" << endl;
  else if(seg) cout << "SEGMENT" << endl;
  else if(deg) cout << "IMPOSSIBLE" << endl;

  return 0;
}
