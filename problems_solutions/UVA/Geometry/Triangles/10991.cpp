#include <cmath>
#include <iostream>

using namespace std;

#define PI 3.141592653589793

class Triangle {
  public:
    double a,b,c;
    double AB,AC,BC;

    Triangle(double av,double bv, double cv) : a(av),b(bv),c(cv){}
    
    void classification_by_angles()
    {
      AB = acos((c*c - a*a - b*b)/(-2*a*b));
      AC = acos((b*b - a*a - c*c)/(-2*a*c));
      BC = acos((a*a - b*b - c*c)/(-2*b*c));
    }

    double area() const
    {
      auto s = a + b + c / 2.0;

      return sqrt(s*(s - a)*(s - b)*(s - c));
    }
};  

int main(){
  
  int n;
  cin >> n;
  double r1,r2,r3;
  while(n--){
    scanf("%lf %lf %lf",&r1,&r2,&r3);

    Triangle tri(r1+r2,r2+r3,r3+r1);
    tri.classification_by_angles();
    
    double areaT = tri.area();
    double areaArcs = ((tri.AC * PI * (r1 * r1))/2.0 * PI) +  ((tri.AB * PI * (r2 * r2))/2.0 * PI) + ((tri.BC * PI * (r3 * r3))/2.0 * PI);

    printf("%.4lf\n",areaT - areaArcs);

  }  

  return 0;
}
