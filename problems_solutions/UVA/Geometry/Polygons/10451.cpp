#include <iostream>
#include <cmath>

using namespace std;
#define PI 3.141592653589793

double raiozao(double A, int n)
{
      return sqrt(A / 0.5*n*sin(2*PI/n));
}

int main(){

  int n;
  double v;
  int caso = 0;

  while(cin >> n >> v){
    if(n < 3)break;

    double raioin = sqrt(v/PI);

    double s = raioin * 2 * tan(PI / n);

    double apol = (1.0/2.0) * n * raioin * s; 

    double raiog = raiozao(apol,n);
    double areazona = PI * raiog * raiog;
    
    printf("Case %d: %.5lf %.5lf\n",++caso,apol - v,areazona - apol);
    
  }

  return 0;
}
