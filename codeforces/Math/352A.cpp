#include <iostream>
#include <cmath>

using namespace std;

int main(){
  
  int n;
  cin >> n;
  int c0 = 0,c5 = 0,a;

  while(n--){
    cin >> a;
    if(a == 0) c0++;
    else c5++;
  }  

  if(c0 == 0) cout << "-1" << endl;
  else if(c5 < 9) cout << "0" << endl;
  else{
      int vezes = 0;
      int pot = 1;

      for(int i  =0;i < c5;++i){
          while(pot * 5 % 90 == 0){
              
          }  
      }
      for(int i  =0;i < c5;++i){
      for(int i =0;i < c0;++i) cout << "0";
  }  

  cout << endl;
  
  return 0;
}
