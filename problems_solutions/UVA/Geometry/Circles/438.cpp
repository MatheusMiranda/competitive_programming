#include <iostream>
#include <cmath>

using namespace std;
using Point = pair<double,double>;

#define PI 3.141592653589793
#define EPS 1e-9

bool equals(double a,double b){
    return fabs(a - b) < EPS;
}  
 
double distance(const Point& P,const Point& Q){
    return sqrt((P.first - Q.first)*(P.first - Q.first) + (P.second - Q.second)*(P.second - Q.second));
}  

class Circle {
  public:
    Point C;
    double r;

    Circle(const Point& Cv = Point(0, 0), double rv = 1.0) : C(Cv), r(rv) {}
};


Circle circle_from_3_points(const Point& P, const Point& Q, const Point& R)
{
  auto a = 2*(Q.first - P.first);
  auto b = 2*(Q.second - P.second);
  auto c = 2*(R.first - P.first);
  auto d = 2*(R.second - P.second);

  auto det = a*d - b*c;

    if (equals(det, 0))
      return Circle();

  auto k1 = (Q.first*Q.first + Q.second*Q.second) - (P.first*P.first + P.second*P.second);
  auto k2 = (R.first*R.first + R.second*R.second) - (P.first*P.first + P.second*P.second);

  auto cx = (k1*d - k2*b)/det;
  auto cy = (a*k2 - c*k1)/det;

  Point C(cx, cy);
  auto r = distance(C,P);

  return Circle(C, r);
}


int main(){

  Point p1,p2,p3;

  while(scanf("%lf %lf %lf %lf %lf %lf",&p1.first,&p1.second,&p2.first,&p2.second,&p3.first,&p3.second)!= EOF){

    Circle c1 = circle_from_3_points(p1,p2,p3);

    printf("%.2lf\n",c1.r * 2.0 * PI);

  }

  return 0;
}
