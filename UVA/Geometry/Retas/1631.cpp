#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

using Point = pair<double,double>;
vector<Point> cerejas;


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

    double distance(const Point& p) const
    {
      return fabs(a*p.first + b*p.second + c)/hypot(a, b);
    }

    double det(const Point& P, const Point& Q, const Point& R)
    {
      return (P.first * Q.second + P.second * R.first + Q.first * R.second) - (R.first * Q.second + R.second * P.first + Q.first * P.second);
    }
};

int main(){

  int n;

  while(scanf("%d",&n),n){
    Point par;

    for(int i = 0;i < n;++i){
      scanf("%lf %lf",&par.first,&par.second);
      cerejas.push_back(par); 
    }

    double menor = 1<<30;
    double somaEsquerda = 0.0;
    double somaDireita = 0.0;
    double res = 0.0;

    for(int i = 0;i < n;++i){
      for(int j = i;j < n;++j){

        if(i == j) continue;
        Line line(cerejas[i],cerejas[j]);

        for(int k = 0;k < n;++k){
          if(k == i || k == j) continue;
          double det = line.det(cerejas[i],cerejas[j],cerejas[k]);
          double dist = line.distance(cerejas[k]);
          if(det>0) somaEsquerda+= fabs(dist);
          else somaDireita+= fabs(dist);
        }

        res = fabs(somaEsquerda - somaDireita);

        if(res < menor){
          menor = res;
        } 

        somaEsquerda = 0.0;
        somaDireita = 0.0;
      }
    }

    printf("%.3lf\n",menor);
    cerejas.clear();
  }
  return 0;
}
