#include <iostream>

using namespace std;

int main(){

  int n;
  cin >> n;
  int a;
  int cont = 0;
  int b,m;
  cin >> a;
  b =a;m=a;
  for(int i =1;i< n;++i){
      cin >> a;
      if(a < m){
        m = a;
        cont++;
      } 
      if(a > b){
        b = a;
        cont++;
      }  
  } 

  printf("%d\n",cont);

  return 0;
}
