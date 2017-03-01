#include <iostream>
#include <vector>

using namespace std;

int linha[8];

int x,y,contador;

bool seta(int lin,int col){
      
    for(int i  =0;i < col;++i){
      if(linha[i] == lin || (abs(linha[i] - lin) == abs(i - col))){
        return false;
      }  
    }

    return true;
}  

void sol(int col){
    
  if(col == 8 && linha[y] == x){   
    printf("%2d      %d",++contador,linha[0] + 1);
    for(int i = 1;i < 8;++i) printf(" %d",linha[i] + 1);
    printf("\n");
  }
  
  for(int lin = 0;lin < 8;++lin){ 
     if(seta(lin,col)){
        linha[col] = lin;
        sol(col + 1);
     }  
  } 
}   

int main(){
  
  int n;
  cin >> n;
  

  while(n--){
  contador = 0;
    cin >> x >> y;
    --x;--y;
  printf("SOLN       COLUMN\n");
  
    printf(" #      1 2 3 4 5 6 7 8\n\n");
    sol(0);
    if(n) printf("\n");
  }

  return 0;
}
