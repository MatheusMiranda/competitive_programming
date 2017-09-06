#include <istream>
#include <vector>
#include <cstring>

using namespace std;

int matrizona[1010][1010];
int visitados[1010];
int qt[1010];

int n;

int dfs(int no){

  for(int j = 0;j < n;++j){
      if(matrizona[no][j] == 'S'){
        qt[no]++;
      }  
  }  


}  

int main(){
  

  scanf("%d",&n);

  for(int i = 0;i < n;++i)
    for(int j = 0;j < n;++j)
       scanf("%d",&matrizona[i][j]);

  for(int i = 0;i < n;++i){
      if(!visitados[i]){
         dfs(i); 
      }  
  }

  return 0;
}
