#include <iostream>
#include <cstdio>

using namespace std;

int main(){

  float a = 0,b = 1,c = 2,d = 3;
  int flag = 0;

  while(a < 2.1){

    if(flag == 0 || (a < 2.1 && a >= 2.0)){
    printf("I=%.0f J=%.0f\n",a,b);
    printf("I=%.0f J=%.0f\n",a,c);
    printf("I=%.0f J=%.0f\n",a,d);

    flag = 1;
    }else{

      printf("I=%.1f J=%.1f\n",a,b);
      printf("I=%.1f J=%.1f\n",a,c);
      printf("I=%.1f J=%.1f\n",a,d);

    }

    a+=0.2;
    b+=0.2;
    c+=0.2;
    d+=0.2;

  }


  return 0;
}
