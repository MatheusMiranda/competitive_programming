#include <bits/stdc++.h>

using namespace std;
using Point = pair<int,int>;
#define EPS 1e-9

bool equals(double a, double b)
{
  return fabs(a - b) < EPS;
}

double distance(const Point& P, const Point& Q)
{
  return sqrt((P.first - Q.first)*(P.first - Q.first) + (P.second - Q.second)*(P.second - Q.second));
}

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


vector<Point> pontos;
vector<Segment> segs;

int main(){

  int c;
  scanf("%d",&c);
  int n;
  Point p;

  while(c--){
    scanf("%d",&n);
    for(int i  =0;i < n;++i){
      scanf("%d %d",&p.first,&p.second);
      pontos.push_back(p);
    } 

    int count = 0;

    int start = 0;
    if(n % 2 != 0) start = 1;

    sort(pontos.begin(),pontos.end());

    for(int i = start;i < n - 1;i+=2){
       Segment segment(pontos[i],pontos[i+1]);
       segs.push_back(segment);
       count++;
    }

    double area = 0;
    int tam = segs.size();
    int xmaior,ymaior;

    for(int i = segs.size() - 1;i >= 0;--i){
        
        if(i == segs.size() - 1){
            area += distance(segs[i].A,segs[i].B); 
        }else{
            ymaior = abs(segs[i].A.second - segs[i].B.second);
            xmaior = abs(segs[i].A.first - segs[i].B.first);
            double teta = atan(1.0*ymaior/xmaior);
            int ymenor = segs[i].A.second - segs[i+1].A.second;
            
            if(ymenor > 0) 
                area += ymenor/sin(teta);
      
        }  

    }  
    
    printf("%.2lf\n",area);
    pontos.clear();
    segs.clear();
  }

  return 0;
}
