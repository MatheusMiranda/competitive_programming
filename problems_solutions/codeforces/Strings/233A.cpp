#include <iostream>

using namespace std;

int main(){

  int a;
  cin >> a;
  int n =a;

  if(n %2)printf("-1\n");
  else{
    while(n){
      if(n == a) printf("%d",n);
      else printf(" %d",n);     
      n--;
    } 

    printf("\n");
  }  

  return 0;
}
