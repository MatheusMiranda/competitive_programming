#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int numero,n2;
    scanf("%d %d",&numero,&n2);

    for(int i = 1; i <= n2; i++){

        printf("%d",i);

        if(i%numero == 0){
          printf("\n");
        }else{
          printf(" ");
        }

    }

    return 0;
}
