#include <iostream>
#include <cmath>

using namespace std;

int main(){
  
  long long a,b,c;
  long long s1,s2,s3;
  cin >> s1 >> s2 >> s3;
  a = sqrt((s1*s3)/s2);
  b = sqrt((s2*s1)/s3);
  c = sqrt((s2*s3)/s1);

  cout << 4 * (a + b + c)<< endl;

  return 0;
}
