#include <bits/stdc++.h>

using namespace std;

#define MAX 10001

int vet[MAX];

int main(){

  int n,a;
  while(scanf("%d",&n) != EOF){

    vector<long long> b1(n+1,0);
    vector<long long> b2(n+1,0);

    for(int i  = 1;i <= n;++i){
      scanf("%d",&vet[i]);
      if(i > 1){
        b1[i-1] = max(vet[i],vet[i-1]);
        b2[i-1] = max(vet[i],vet[i-1]);
      }
    }
 
    int ran = 2;
    int turn = 1;
  
    while(1){
      
      if(n == 2){
           b1[1] = max(vet[1],vet[2]);        
          break; 
      }    
  
      ran += 2; 
      
      for(int i = 1;i <= n - ran + 1;++i){
          if(turn){
              b1[i] = max(vet[i] + max(b2[i+1],b2[i+2]),vet[i+ran-1] + max(b2[i],b2[i+1])); 
          }        
          else{
              b2[i] = max(vet[i] + max(b1[i+1],b1[i+2]),vet[i+ran-1] + max(b1[i],b1[i+1]));  
          }
      }         
        
      if(ran == n) break;
      turn = 1 - turn;
    }    

    if(turn) printf("%lld\n",b1[1]);
    else printf("%lld\n",b2[1]);  

  }

  return 0;

}

