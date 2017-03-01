#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.141592653589793

int a,b,c;
double area() 
{
  auto s = (a + b + c) / 2.0;

  return sqrt(s*(s - a)*(s - b)*(s - c));
}

double circumradius() 
{
  return (a * b * c)/(4 * area());
}

double inradius() 
{
  return (2* area())/ (a + b + c);
}

int main(){

  while(scanf("%d %d %d",&a,&b,&c) != EOF){

  double raioMaior = circumradius();
  double amarelo = PI * (raioMaior * raioMaior);

  double tri = area();

  double raioMenor = inradius();
  double vermelho = PI * (raioMenor * raioMenor);
  
  printf("%.4lf %.4lf %.4lf\n",amarelo - tri,tri - vermelho,vermelho);

  }

  return 0;
}
