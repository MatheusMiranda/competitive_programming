#include <iostream>
#include <cmath>

using namespace std;

#define PI acos(-1)

int main(){

  int n;  
  scanf("%d",&n);
  
  double l;
  double r,w;

  while(n--){
    scanf("%lf",&l);

    r = l/5;
    w = l*6/10;

    double area = l * w;

    double circ = PI * (r*r);

    printf("%.2lf %.2lf\n",circ,area - circ);

  }    

  return 0;
}

