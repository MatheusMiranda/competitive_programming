#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){

  int n;
  scanf("%d",&n); 
  string p1,p2;
  string linha,ol;

  int contador = 0;
  while(n--){
    getchar();
    getline(cin,p1);
    getline(cin,p2);
    getchar();

    if(contador) printf("\n");
    printf("%s\n%s\n",p2.c_str(),p1.c_str());
    contador++;
    while(getline(cin,linha)){

      if(linha.size() == 0){
         break;
      }

      ol = "";

      transform(linha.begin(),linha.end(),back_inserter(ol),[&](char c){
          return p1.find(c) != string::npos ? p2[p1.find(c)] : c;
      });
    
      cout << ol << endl;

    }

  }

}

