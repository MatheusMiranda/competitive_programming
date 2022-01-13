#include <iostream>

using namespace std;

int matrizona[6][6];

int main(){

  int x,y;

  for(int i = 1;i <= 5;++i)
    for(int j = 1;j <= 5;++j){
     cin >> matrizona[i][j];
     if(matrizona[i][j] == 1){
        x= i;
        y = j;
     }  
    
    }

  printf("%d\n",abs(x - 3) + abs(y - 3)); 

  return 0;
}  
