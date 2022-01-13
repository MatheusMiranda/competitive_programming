#include <bits/stdc++.h>

using namespace std;

int main(){
  string line;
  int b = 0;
  int i = 0;
  while(getline(cin,line)){
    for(auto el : line){
      if(el == '*'){
        if(b){
          cout << "</b>";
          b = 0;
        }else{
          b = 1;
          cout << "<b>";
        }
      }
      else if(el == '_'){
        if(i){
          cout << "</i>";
          i = 0;
        }else{
          i = 1;
          cout << "<i>";
        }
      }
      else cout << el;
    }
    cout << endl;
  }

  return 0;
}
