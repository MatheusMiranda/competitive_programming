#include <iostream>
#include <vector>
#include <cmath>

#define EPS 1e-9
#define PI 3.141592653589793

bool equals(double a, double b)
{
      return fabs(a - b) < EPS;
}

using namespace std;

vector<double> vet;

class Triangle {
  public:
    double a, b, c;

    Triangle(double av, double bv, double cv) : a(av), b(bv), c(cv) {}

    double circumradius() const
    {
      return (a * b * c)/(4 * area());
    }

    double area() const
    {
      auto s = (a + b + c) / 2.0;

      return sqrt(s*(s - a)*(s - b)*(s - c));
    }

    bool find_obtuse(){
      
      auto AB = acos((c*c - a*a - b*b)/(-2*a*b));
      auto AC = acos((b*b - a*a - c*c)/(-2*a*c));
      auto BC = acos((a*a - b*b - c*c)/(-2*b*c));

      auto right = PI / 2.0;
      
      return (AB > right || AC > right || BC > right);
                
    }

};

vector<Triangle> tri;

int main(){

  int m;
  double diam;

  scanf("%d",&m);

  for(int i =0;i < m;++i){
    scanf("%lf",&diam);
    vet.push_back(diam);
  } 

  int n;

  scanf("%d",&n);

  Triangle tg(1.0,2.0,3.0);
  for(int i = 0;i < n;++i){
      scanf("%lf %lf %lf",&tg.a,&tg.b,&tg.c); 
      tri.push_back(tg);
  } 

  double raioC;
  int count;
  vector<int> sol;
  Triangle c(0.0,0.0,0.0);
  double maior;

  for(int i = 0;i < n;++i){

    c = tri[i];
    if(c.find_obtuse()){
       raioC = max(c.a,max(c.b,c.c))/2.0; 
    }else{
      raioC = tri[i].circumradius();          
    }

    for(int j =0;j < m;++j){
      if(raioC < vet[j]/2.0 || equals(raioC,vet[j]/2.0)){
        sol.push_back(j + 1);
      }  
    } 
  
    char letra = (char) i + 65;

    if(sol.size() == 0) printf("Peg %c will not fit into any holes\n",letra);
    else{
        printf("Peg %c will fit into hole(s):",letra);
        for(int k = 0;k < sol.size();++k){
            printf(" %d",sol[k]);
        } 

    printf("\n");
    }

    
    sol.clear();  
  }     


  return 0;
}
