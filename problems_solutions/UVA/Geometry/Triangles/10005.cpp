#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

using point = pair<double,double>;

vector<point> vet;

double distance(const Point& P, const Point& Q)
{
      return sqrt((P.x - Q.x)*(P.x - Q.x) + (P.y - Q.y)*(P.y - Q.y));
}

double matrizona[102][102];

int main(){

  int n;
  double raio;
  while(scanf("%d",&n),n){
    for(int i  =0;i < n;++i){
      Point p;
      scanf("%lf %lf",p.first,p.second);
      vet.push_back(p);
    } 

    scanf("%lf",&raio);

    for(int i  =0;i < n;++i){
      for(int j = i;j < n;++j){
        if(i == j ){
          matrizona[i][j] = 0.0;
          continue;
        }

        matrizona[i][j] = distance(vet[i],vet[j]);
      }  
    }    

  }  

  return 0;
}
