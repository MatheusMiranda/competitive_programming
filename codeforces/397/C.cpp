#include <iostream>

using namespace std;

int main(){

  long long k,a,b;

  cin >> k >> a >> b;
  int l = a/k,l2 = b/k; 
  
  long long t;
  
  if(a % k == 0 && b % k == 0){
    t = a/k + b /k;
  }else{
    t = (a + b)/k;
  }

  if(t > 0) cout << t << endl;
  else cout << "-1" << endl;

  return 0;
}
