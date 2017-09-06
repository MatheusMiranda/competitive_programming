#include <bits/stdc++.h>

using namespace std;

int main(){

  long long a,b;

  while(cin >> a){
    if(a == 0){
      cout << 1 << endl;
      continue;
    }

    long long nums = a + (a-1);
    long long f = (a * (a - 1)) - (a - 2);
    long long first = 2 * f - 1;

    long long num1,num2,num3;
  
    num1 = first + ((nums - 1) * 2);
    num2 = first + ((nums - 2) * 2);
    num3 = first + ((nums - 3) * 2);

    long long sum = num1 + num2 + num3;
    cout << sum << endl;
  }

  return 0;
}
