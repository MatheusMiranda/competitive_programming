#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int vet[70];

int main(){

  int n,m;

  cin >> n >> m;

  memset(vet,0,sizeof vet);

  for(int i = 2;i < 59;++i){
     for(int j = 2;j < 59;j++){
        if(i == j) continue;
        if(j % i == 0){
          vet[j] = -1;
        } 
     }  
  } 

  int ind;
  for(int i = n+1;i <= 50;++i){
     if(vet[i] == 0){
        ind = i;
        break;
     }
  }  
  
  if(ind == m) printf("YES\n");
  else printf("NO\n");


  return 0;
}
