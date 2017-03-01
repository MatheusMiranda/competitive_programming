#include <iostream>
#include <string>

using namespace std;

int main(){
    
  string w;
  cin >> w;
  int sum = 0,prev= 0;
  
  for(int i =0;i < w.size();++i){
    if(islower(w[i])) prev++;
    else{
        if(prev){
          sum++;
          prev--;
        }
    } 
  }
    
  cout << sum << endl;  

  return 0;
}
