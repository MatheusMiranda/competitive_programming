#include <bits/stdc++.h>

using namespace std;

int reverse(int a){
  
  int num = 0;
  int res;  

  while(a != 0){
    int res = a % 10;
    num = num * 10 + res;
    a /= 10;      
  }   

  return num;
}

int main(){
  int n;
  cin >> n;
  int a,b;

  while(n--){
    cin >> a >> b;
    cout << reverse(reverse(a) + reverse(b)) << endl;
 } 
  
  return 0;
}

