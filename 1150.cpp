#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    long long int n,casos,contador = 0;

    scanf("%lld",&casos);

    for (int i = 0; i < casos; ++i)
    {

        scanf("%lld",&n);

        for (int i = 2; i < n; ++i)
        {
          if(n%i==0){
            contador = 1;
            break;
          }
        }

        if(contador == 0){
          printf("%lld eh primo\n",n);
        }else{
          printf("%lld nao eh primo\n",n);
        }

        contador = 0;


    }


    return 0;
}
