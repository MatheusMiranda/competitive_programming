#include <iostream>
#include <cmath>

using namespace std;
using Point = pair<double,double>;

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

    double det(const Point& P, const Point& Q, const Point& R)
    {
          return (P.first * Q.second + P.second * R.first + Q.first * R.second) - (R.first * Q.second + R.second * P.first + Q.first * P.second);
    }
};

int main(){

  Point p1,p2;
  scanf("%lf %lf %lf %lf",&p1.first,&p1.second,&p2.first,&p2.second);

  Line line(p1,p2);

  double dist = hypot(p1.first - p2.first,p1.second - p2.second);
  
  int n;
  int hab;
  Point planeta;

  int esq = 0,habsesq = 0,dir = 0,habsdir = 0,cima = 0;

  scanf("%d",&n);

  while(n--){

    scanf("%lf %lf %d",&planeta.first,&planeta.second,&hab);

    double det = line.det(p1,p2,planeta);

    if(det > 0){
        esq++;
        habsesq+=hab;
    }else if(det < 0){
        dir++;
        habsdir+=hab;
    }else{  
       cima++;
    }  
 
  }

  printf("Relatorio Vogon #35987-2\n");
  printf("Distancia entre referencias: %.2lf anos-luz\n",dist);
  printf("Setor Oeste:\n");
  printf("- %d planeta(s)\n",esq);
  printf("- %d bilhao(oes) de habitante(s)\n",habsesq);
  printf("Setor Leste:\n");
  printf("- %d planeta(s)\n",dir);
  printf("- %d bilhao(oes) de habitante(s)\n",habsdir);
  printf("Casualidades: %d planeta(s)\n",cima);

  return 0;
}
