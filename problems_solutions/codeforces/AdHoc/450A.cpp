#include <iostream>

using namespace std;

int main(){
  
  int n,m;

  cin >> n >> m;
  int maior = -1;
  int ind,num;

  for(int i = 0;i< n;++i){
    cin >> num;
    if((num + m-1)/m >= maior){
      maior= (num + m - 1)/m;
      ind = i;
    } 
  } 

  printf("%d\n",ind + 1);

  return 0;
}
