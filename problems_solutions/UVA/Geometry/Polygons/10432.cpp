#include <iostream>
#include <cmath>

using namespace std;
#define PI 3.141592653589793

double area(double R, int n)
{
      return 0.5*n*R*R*sin(2*PI/n);
}

int main(){

  double r;
  int l;

  while(cin >> r >> l){
        
    printf("%.3lf\n",area(r,l));

  }  

  return 0;
}
