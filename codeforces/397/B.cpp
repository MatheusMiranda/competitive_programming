#include <iostream>
#include <string>
#include <set>

using namespace std;

set<int> ns;

int main(){

  string p;
  cin >> p;
  int ind;
  bool flag = true;

  for(int i = 0;i < p.size();++i){
    ind = int(p[i]) - int('a');
    int m = 0;
    for(auto el : ns){
      if(el == m){
        m++;
      }
      if(m == ind)break;

    }
    if(m < ind){
      flag = false;
      break;
    }
    ns.insert(ind);
  }

  if(ns.size() <= 26 && flag) cout << "YES\n";
  else cout << "NO\n";

  return 0;
}

