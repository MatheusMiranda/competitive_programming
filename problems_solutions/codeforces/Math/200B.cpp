#include <iostream>

using namespace std;

int main(){
  
  int n;
  cin >> n;
  int a = n;
  int b;
  long long soma = 0;

  while(a--){
    cin >> b;
    soma += b;
  }
  
  double result = soma*1.0 / n * 1.0;

  printf("%.7lf\n",result);

  return 0;
}
