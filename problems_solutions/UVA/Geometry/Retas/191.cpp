#include <iostream>
#include <cmath>

using namespace std;
using Point = pair<double,double>;

#define EPS 1e-9

bool equals(double a, double b)
{
      return fabs(a - b) < EPS;
}

class Line {
  public:
    double a;
    double b;
    double c;

    Line(double av, double bv, double cv) : a(av), b(bv), c(cv) {}

    Line(const Point& p, const Point& q)
    {
      a = p.second - q.second;
      b = q.first - p.first;
      c = p.first * q.second - p.second * q.first;

      auto k = a ? a : b;

      a /= k;
      b /= k;
      c /= k;
    }
};

class Segment {
  public:
    Point A, B;

    Segment(const Point& Av, const Point& Bv) : A(Av), B(Bv) {}

    bool contains(const Point& P) const
    {
      if (A.first == B.first)
        return min(A.second, B.second) <= P.second and P.second <= max(A.second, B.second);
      else
        return min(A.first, B.first) <= P.first and P.first <= max(A.first, B.first);
    }

    double D(const Point& P, const Point& Q, const Point& R) const
    {
          return (P.first * Q.second + P.second * R.first + Q.first * R.second) - (R.first * Q.second + R.second * P.first + Q.first * P.second);
    }


    bool intersect(const Segment& s) const
    {
      auto d1 = D(A, B, s.A);
      auto d2 = D(A, B, s.B);

      if ((equals(d1, 0) && contains(s.A)) || (equals(d2, 0) && contains(s.B)))
          return true;

          auto d3 = D(s.A, s.B, A);
          auto d4 = D(s.A, s.B, B);

          if ((equals(d3, 0) && s.contains(A)) || (equals(d4, 0) && s.contains(B)))
            return true;

            return (d1 * d2 < 0) && (d3 * d4 < 0);
            }


    double length() const
    {
      return hypot(A.first - B.first, A.second - B.second);
    }
};

int main(){
  
  int n;
  scanf("%d",&n);
  while(n--){
    Point p1,p2,p3,p4,p5,p6;
    double xl,xt,xr,xb;
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&p1.first,&p1.second,&p2.first,&p2.second,&xl,&xt,&xr,&xb);

    double aux;
    if(xt < xb) {
       aux = xt;
       xt = xb;
       xb = aux;
    }  
    if(xl > xr){
       aux = xr;
       xr = xl;
       xl = aux;
    }

    p3.first = xl;
    p3.second = xt;
    p4.first = xl;
    p4.second = xb;
    p5.first = xr;
    p5.second = xt;
    p6.first = xr;
    p6.second = xb;

    Segment reta(p1,p2);

    Segment reta2(p3,p4);
    Segment reta3(p4,p6);
    Segment reta4(p5,p6);
    Segment reta5(p3,p5);

    int t = 0;

    if(reta.intersect(reta2)) t = 1;
    else if(reta.intersect(reta3)) t = 1;
    else if(reta.intersect(reta4)) t = 1;
    else if(reta.intersect(reta5)) t = 1;

    double a = p1.first;
    double b = p1.second;

    if(t == 0){
        if(a > p4.first && b > p4.second && a > p3.first && b < p3.second && a < p5.first && b < p5.second && a < p6.first && b > p6.second)
          t = 1;
    }  
  
    if(t) printf("T\n");
    else printf("F\n");

  }

  return 0;
}
