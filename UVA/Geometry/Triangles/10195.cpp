#include <iostream>
#include <cmath>

using namespace std;

double a,b,c;
double area() 
{
    auto s = (a + b + c) / 2.0;

      return sqrt(s*(s - a)*(s - b)*(s - c));
}

double inradius() 
{
    return (2* area())/ (a + b + c);
}

int main(){

  while(scanf("%lf %lf %lf",&a,&b,&c) != EOF){


    double raioMaior = inradius();
    if(a == 0.0 && b == 0.0 && c == 0.0)raioMaior = 0.0; 

    printf("The radius of the round table is: %.3lf\n",raioMaior);

  }

  return 0;
}


