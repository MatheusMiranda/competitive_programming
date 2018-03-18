#include <bits/stdc++.h>

using namespace std;

list<char> l;
list<char>::iterator it;

int main(){
  string linha;

  while(getline(cin,linha)){
    l.clear();
    it = l.begin();
    for(auto el : linha){
      if(el == '['){
        it = l.begin();
      }
      else if(el == ']'){
        it = l.end();
      }
      else{
        l.insert(it,el);
      }
    }

    for(auto el : l) cout << el;
    cout << endl;
  }

  return 0;
}
