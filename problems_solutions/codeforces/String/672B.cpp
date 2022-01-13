#include <bits/stdc++.h>

using namespace std;

map<char,int> d;

int main(){
  int b; 
  string a;
  cin >> b;
  cin >> a;

  int cont = 0;

  if(a.size() > 26)
    cout << "-1" << endl;
  else{
  for(auto el : a){
    if(!d[el]){ 
       cont ++;
      d[el]++;
    } 
  }

  cout << a.size() - cont << endl;

  }

  return 0;
}
