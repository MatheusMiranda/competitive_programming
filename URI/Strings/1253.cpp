#include <bits/stdc++.h>

using namespace std;

string alf = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main(){

  int n,shift;
  cin >> n;
  string w;  

  while(n--){
    cin >> w >> shift;
    for(auto el : w){
      cout << alf[((alf.find(el) - shift) + 26) % 26];
    }
    cout << endl;
  }

  return 0;
}
