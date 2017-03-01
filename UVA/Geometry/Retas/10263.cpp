#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
using Point = pair<double,double>;

double distance(const Point& P, const Point& Q)
{
      return sqrt((P.first - Q.first)*(P.first - Q.first) + (P.second - Q.second)*(P.second - Q.second));
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

    Point closest(const Point& p) const // Ponto da reta mais próximo de p
    {
      auto den = a*a + b*b;
      auto x = (b*(b*p.first - a*p.second) - a*c)/den;
      auto y = (a*(-b*p.first + a*p.second) - b*c)/den;

      return Point(x, y);
    }
};


class Segment{

  public:
    Point A, B;

    Segment(const Point& Av, const Point& Bv) : A(Av), B(Bv) {}

    double length() const
    {
      return hypot(A.first - B.first, A.second - B.second);
    }

    bool contains(const Point& P) const
    {
      if (A.first == B.first)
        return min(A.second, B.second) <= P.second and P.second <= max(A.second, B.second);
      else
        return min(A.first, B.first) <= P.first and P.first <= max(A.first, B.first);
    }


    Point closest(const Point& P)
    {
      Line r(A, B);

      auto Q = r.closest(P);

      if (this->contains(Q))
        return Q;

      auto distA = distance(A,P); 
      auto distB = distance(B,P);

      if (distA <= distB)
        return A;
      else
        return B;
    }
};

vector <Segment> segs;

int main(){

  Point p,p2;
  Point M;
  while(scanf("%lf %lf",&M.first,&M.second)!= EOF){
    int n;
    scanf("%d",&n);

    for(int i = 0;i < n;++i){
      if(i == 0){
        scanf("%lf",&p.first);
        scanf("%lf",&p.second);
        scanf("%lf",&p2.first);
        scanf("%lf",&p2.second);
        Segment seg(p,p2);
        segs.push_back(seg);
        p = p2;
      }else{
        scanf("%lf",&p2.first);
        scanf("%lf",&p2.second);
        Segment seg(p,p2);
        segs.push_back(seg);
        p = p2;
      }

    }

    double menor = 1<<30;
    Point closest;

    for(int i =0;i < segs.size();++i){
        Point perto = segs[i].closest(M);
        double dist =  distance(perto,M);
        
        if(dist < menor){
          menor = dist;
          closest = perto;
        }  
        
    }  

    printf("%.4lf\n%.4lf\n",closest.first,closest.second);
    segs.clear();

  }

  return 0;
}
