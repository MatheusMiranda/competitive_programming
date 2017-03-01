#include <iostream>

using namespace std;

#define MAX 100001

int main(){

  int n,a,flag = 0;
  cin >> n;

  for(int i = 1;i <= MAX;++i){
    if(flag) break;
      
    int num = n * i + 1;
    for(int j = 2;j < num;++j){
      if(num % j == 0){
        flag = 1;
        a = i;
        break;
      }  
    }  
  } 

  cout << a << endl;


  return 0;
}
