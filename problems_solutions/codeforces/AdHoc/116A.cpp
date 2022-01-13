#include <iostream>

using namespace std;

int main(){
  
  int n;
  cin >> n;
  int dentro = 0;
  int a,b;
  int maior = -1;
  while(n--){
    cin >> a >> b;  
    dentro-=a;
    dentro+=b;
    if(dentro > maior) maior = dentro;      
  }

  printf("%d\n",maior);

  return 0;
}
