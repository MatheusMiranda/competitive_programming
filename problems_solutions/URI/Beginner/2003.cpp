#include <bits/stdc++.h>

using namespace std;

int main(){
  int a,b;

  while(scanf("%d:%d",&a,&b) != EOF){

  if(a >= 7){
    cout << "Atraso maximo: " << (abs(7 - a) * 60) + b << endl;
  }
  else cout << "Atraso maximo: 0" << endl;

  }

  return 0;
}  
