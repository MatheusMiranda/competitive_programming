#include <iostream>
#include <cmath>

using namespace std;

using Point = pair<double,double>;
using ii = pair<int,Point>;

#define INF -1
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

    bool operator==(const Line& r) const
    {
      return equals(a, r.a) && equals(b, r.b) && equals(c, r.c);
    }

};

int main(){

  int a,b,c;
  int d,e,f;
  
  while(1){
    scanf("%d %d %d",&a,&b,&c); 
    scanf("%d %d %d",&d,&e,&f);

    if(!a && !b && !c && !d && !e && !f)break;

    Line line1(a,b,c);
    Line line2(d,e,f);
    ii resp = line1.intersections(line1,line2);

    if(resp.first == 0){
        printf("No fixed point exists.\n");
    }else{
          printf("The fixed point is at %.2lf %.2lf.\n",resp.second.first * -1.0,resp.second.second * -1.0);
    } 

  }  

     


  return 0;
}
