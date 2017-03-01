#include <iostream>
#include <cmath>
using namespace std;
double PI = 2*acos(0);

int main(){
  
  int n;

  scanf("%d",&n);

  int d,l;

  while(n--){
    scanf("%d %d",&d,&l);
    double b = sqrt((l*l/4.0) - (d*d/4.0));
    double a = d/2.0 + (l-d)/2.0;
    printf("%.3lf\n",PI*b*a);


  }  
  

  return 0;
}
