#include <iostream>
#include <cmath>

#define EPS 1e-9
#define INF -1

using namespace std;
using Point = pair<double,double>;
using ii = pair<int,Point>;


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

    bool operator==(const Line& r) const
    {
      return equals(a, r.a) && equals(b, r.b) && equals(c, r.c);
    }

    //bool parallel(const Line& r) const
    //{
     // return equals(a, r.a) && equals(b, r.b) && !equals(c, r.c);
    //}

    //bool coincidence(const Line&r) const
   // {
     // return equals(a, r.a) && equals(b, r.b) && equals(c, r.c);
   // }

};

pair<int, Point> intersections(const Line& r, const Line& s)
{
  auto det = r.a * s.b - r.b * s.a;

  if (equals(det, 0))
  {
    int qtd = (r == s) ? INF : 0;

    return pair<int, Point>(qtd, Point()); 
  } else  
  {
    auto x = (-r.c * s.b + s.c * r.b) / det;
    auto y = (-s.c * r.a + r.c * s.a) / det;

    return pair<int, Point>(1, Point(x, y));
  }
}

int main(){

  int n;
  scanf("%d",&n);

  Point p1,p2,p3,p4;

  printf("INTERSECTING LINES OUTPUT\n");

  for(int i = 0;i < n;++i){

    scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&p1.first,&p1.second,&p2.first,&p2.second,&p3.first,&p3.second,&p4.first,&p4.second);

    Line line1(p1,p2);
    Line line2(p3,p4);

    ii a = intersections(line1,line2);

    if(a.first == 0) printf("NONE\n"); 
    else if(a.first == -1) printf("LINE\n");
    else printf("POINT %.2lf %.2lf\n",a.second.first,a.second.second);

  }  

  printf("END OF OUTPUT\n");

  return 0;
}
