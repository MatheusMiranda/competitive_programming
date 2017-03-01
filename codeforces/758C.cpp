#include <iostream>

using namespace std;

int matrizona[103][103];

int main(){

  long long n,m,k,x,y;

  cin >> n >> m >> k >> x >> y;

  if(k < n * m) cout << 1 << " " << 0 << " " <<((x * y) < k? 1 : 0) << endl;
  
  else{
      long long aux = k - n * m;
      long long maxi = 1,div = n + m -1;

      int turns = aux /  (n*m);

      for(int i = 1;i <= n;++i)
        for(int j = 1;j <= n;++j)
          matrizona[i][j] = turns+1;
      
      if(turns > 0){
      if(turns %2 != 0){
        for(int i = n;i<=n;++i)
          for(int j = 1;j <= m;++j)
            matrizona[i][j]--;
      }else{
        for(int i = 1;i<=1;++i)
          for(int j = 1;j <= m;++j)
            matrizona[i][j]--;
      }
      }

      int res = k % (n*m);

      if(turns % 2 == 0){
          int lin = n - 1;
          int col = 1;
        while(res--){
          matrizona[lin][col]++;
          col++;
          if(col > m){
            col = 1;
            lin--;
          }  
        }  
      }else{
          int lin = 2;
          int col = 1;
        while(res--){
          matrizona[lin][col]++;
          col++;
          if(col > m){
            col = 0;
            lin++;
          }
        }  
      } 
      
      long long maior = -1;
      long long menor = 1<<31;
      for(int i = 1;i <= n;++i ){
        for(int j = 1;j <= m;++j ){
          if(matrizona[i][j] > maior){
            maior = matrizona[i][j];
          }  
          if(matrizona[i][j] < menor){
            menor = matrizona[i][j];
          }  
        }  
      }  

      

  }  

  return 0;
}
