#include <iostream>

using namespace std;

int main(){

  int n;
  cin >> n;

  int a = 0,b = 0,c =0;
  int n1,n2,n3;

  while(n--){
    
    cin >> n1 >> n2 >> n3;
    a += n1;
    b += n2;
    c += n3;


  }  

    if(a == 0 && b == 0 && c == 0) printf("YES\n");
    else printf("NO\n");

  return 0;
}
