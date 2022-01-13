#include <bits/stdc++.h>

using namespace std;

map<string,int> dic;

int main(){

  dic["Tetrahedron"] = 4;
  dic["Cube"] = 6;
  dic["Octahedron"] = 8;
  dic["Dodecahedron"] = 12;
  dic["Icosahedron"] = 20;

  long long total = 0;
  
  int n;
  cin >> n;
  string p;
  
  while(n--){
    cin >> p;
    total += dic[p];
  }
  
  cout << total << endl;

  return 0;
}
