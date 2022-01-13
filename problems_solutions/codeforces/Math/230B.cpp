#include <iostream>
#include <cmath>
using namespace std;

int main(){

  long long n,a;
  cin >> n;

  while(n--){
    cin >> a;
    int flag = 1; 
    long long b = sqrt(a);
    cout << "asdf " << b << endl;
    for(long long i = 2;i * i <= b;++i){
      if(b % i == 0){
        flag = 0;
        break;
      }
    }  

    if(flag) printf("YES\n");
    else printf("NO\n");
  }  

  return 0;
}
