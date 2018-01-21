#include <bits/stdc++.h>

using namespace std;

int main(){
  int a,b,c,d,e;

  cin >> a >> b >> c >> d >> e;

  if(e){
    if(d) printf("Jogador 2 ganha!\n");
    else printf("Jogador 1 ganha!\n");
  }else{
    if(d) printf("Jogador 1 ganha!\n");
    else{
      if(a){
        if((b + c) % 2 == 0) printf("Jogador 1 ganha!\n");
        else printf("Jogador 2 ganha!\n");
      }else{
        if((b + c) % 2 == 0) printf("Jogador 2 ganha!\n");
        else printf("Jogador 1 ganha!\n");
      }
    }
  }


  return 0;
} 
