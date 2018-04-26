#include <bits/stdc++.h>

using namespace std;

int main(){
  string p;
  
  while(cin >> p){
    if(p == "#") continue;
    if( next_permutation(p.begin(),p.end())){
      cout << p << endl;
    }else{
      cout << "No Successor" << endl;
    }
  }

  return 0;
} 
