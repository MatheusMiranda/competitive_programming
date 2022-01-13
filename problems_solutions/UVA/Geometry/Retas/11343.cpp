#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>

using namespace std;
using Point = pair<double,double>;

#define EPS 1e-9

bool equals(double a, double b)
{
      return fabs(a - b) < EPS;
}

class Segment {
  public:
    Point A, B;

    Segment(const Point& Av, const Point& Bv) : A(Av), B(Bv) {}

    double D(const Point& P, const Point& Q, const Point& R)const
    {
          if( (P.first * Q.second + P.second * R.first + Q.first * R.second) - (R.first * Q.second + R.second * P.first + Q.first * P.second) > 0)return 1;
          else if( (P.first * Q.second + P.second * R.first + Q.first * R.second) - (R.first * Q.second + R.second * P.first + Q.first * P.second) < 0)return -1;
          else return 0;
    }

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
};

vector<Segment> segs;
int vet[110];

int main(){

  int n;
  scanf("%d",&n);
  
  int m;
  Point p,p2;
  while(n--){
    memset(vet,-1,sizeof vet);
    scanf("%d",&m);

    for(int i = 0;i < m;++i){
        scanf("%lf %lf %lf %lf",&p.first,&p.second,&p2.first,&p2.second);
        Segment segment(p,p2);
        segs.push_back(segment);
    }  

    int t = 0;

    for(int i =0;i < m;++i){
      for(int j =0;j < m;++j){
        if(i == j)continue;
        if(segs[i].intersect(segs[j])){
          vet[i] = 1;
          vet[j] = 1; 
        }  
      }
    }

    for(int i = 0;i < m;++i){
        if(vet[i] == -1){
          t++; 
        } 
    }  

    printf("%d\n",t);
    segs.clear();
  }

  return 0;
}
