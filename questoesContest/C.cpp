#include <iostream>
#include <cstdio>

using namespace std;

int main(){

  int n1,n2;

  scanf("%d %d",&n1,&n2);

  if(n1%n2 == 0){
    printf("Atende\n");
  }else{
    printf("Nao atende\n");
  }

  return 0;
}
