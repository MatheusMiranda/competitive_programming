#include <iostream>
#include <string>
#include <cmath>

using namespace std;

#define PI 3.141592653589793

class Triangle{
  public:
     double a,b,c;
     double ang;

     Triangle(double av,double bv,double cv) : a(av),b(bv),c(cv){} 

     void acha_ang(){  
        ang = acos((c*c - a*a - b*b)/(-2*a*b));
     }  

};  

double converte(double min){
  return  (min * 2.0 * PI) / 360.0;
} 

double converte_min(double min){
  double g = min / 60.0;
  return converte(g);
}  

int main(){

  string palavra;
  double a,s;
  double dist; 

  while(cin >> s >> a >> palavra){
     if(a > 180.0) a = 360 -a;
     dist = 6440.0;
     dist += s;

     if(palavra == "deg")  a = converte(a);
     else a = converte_min(a);

     printf("%.6lf %.6lf\n",dist * a,2.0 * dist * sin(a/2.0)); 

  }  
  
  return 0;
}
