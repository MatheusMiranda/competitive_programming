#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

char matrizona[53][53];

using par = pair<int,int>;
using trio = pair<int,par>;

queue<par> fila;
vector<trio> lake;

par us[] {par(1,0),par(-1,0),par(0,1),par(0,-1)};

int contador ;

void dfs(int i, int j){
    
    contador++;

    matrizona[i][j] == '1';

    for(int a = 0;a < 4;++a){
      int novoi= i + us[a].first;
      int novoj = j + us[a].second;

      if(matrizona[novoi][novoj] == '.'){
        dfs(novoi,novoj);
      }  
    
    }    
  
}  

void preenche(int i,int j){
  matrizona[i][j] == '*';

  for(int a= 0;a < 4;++a){
      
      int novoi = i + us[a].first;
      int novoj = j + us[a].second;

      if(matrizona[novoi][novoj] == '1'){
        dfs(novoi,novoj);
      }  
  }  

}  

int main(){

  int n,m,k;

  scanf("%d %d %d",&n,&m,&k);
  
  getchar();

  for(int i =1; i <= n;++i)
    for(int j =1; j <= m;++j){
      scanf("%c",&matrizona[i][j]);
      if(i == 0 || j == 0 || i == n || j == m){
        if(matrizona[i][j] == '.')matrizona[i][j] = '2';
      }  
    }  

  for(int i =1;i <=n ;++i)    
    for(int j =1;j <=m ;++j)    
      if(matrizona[i][j] == '.'){
        contador = 0;
        dfs(i,j);
        lake.push_back(trio(contador,par(i,j)));
      }  
  
  sort(lake.begin(),lake.end());

  int tam = lake.size();

  for(int i = 0;i < tam - k;++i){
    preenche(lake[i].second.first,lake[i].second.second); 
  }

  getchar();

  for(int i = 1;i <= n;++i){
    for(int j = 1;j <= n;++j){
      if(i == 0 || j == 0 || i == n || j == m){
        if(matrizona[i][j] == '2') printf(".");
        else printf("%c",matrizona[i][j]);    
      }
    }
    printf("\n");
  }  

  return 0;
}
