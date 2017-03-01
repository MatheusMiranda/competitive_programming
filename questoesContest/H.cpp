#include <iostream>
#include <cstdio>

using namespace std;

int main(){

  float area,p = 0.20,l;

  scanf("%f",&area);

  l = p * area;

  area -= l;
  printf("Area original: %.2f m2\n",area);

  return 0;
}
