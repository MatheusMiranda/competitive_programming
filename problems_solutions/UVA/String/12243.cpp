#include <bits/stdc++.h>

using namespace std;

int main(){

  string linha,w;

  while(1){

    getline(cin,linha);

    if(linha == "*")break;

    stringstream ss(linha);

    char l = tolower(linha[0]);
    bool flag = true;

    while(ss >> w){
      if(!(tolower(w[0]) == l)){
        flag = false;
        break;
      }
    }  

    if(flag) printf("Y\n");
    else printf("N\n");

  }

  return 0;
}
