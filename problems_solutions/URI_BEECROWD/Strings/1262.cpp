#include <bits/stdc++.h>

using namespace std;

int main(){
  
  string p;
  int procs;

  while(cin >> p){
      scanf("%d",&procs);

      int cont = 0;
      int ps = 0;

      for(int i = 0;i < p.size();++i){    
  
          if(p[i] == 'W'){
             cont++;
             if(ps > 0){
                cont += (ps%procs == 0)? ps / procs : ps / procs + 1;
                ps = 0;
             }
          }
          else{
            ps++; 
          }
      }

      if(ps > 0){
            cont += (ps%procs == 0)? ps / procs : ps / procs + 1;
      }

      printf("%d\n",cont);
    
  }

  return 0;
}
