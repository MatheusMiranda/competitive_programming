#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
using ll = long long;
class Point {
  public:
    double x;
    double y;

    Point(double xv = 0, double yv = 0) : x(xv), y(yv) {}

    bool operator<(const Point& P) const
    {
      return x == P.x ? y < P.y : x < P.x;
    }
};

double D(const Point& P, const Point& Q, const Point& R)
{
  return (P.x * Q.y + P.y * R.x + Q.x * R.y) - (R.x * Q.y + R.y * P.x + Q.x * P.y);
}

vector<Point> monotone_chain_ch(vector<Point>& P)
{
  sort(P.begin(), P.end());

  vector<Point> L, U;

  for (auto p : P)
  {
    while (L.size() >= 2 and D(L[L.size() - 2], L[L.size() -1], p) < 0)
      L.pop_back();

    L.push_back(p);
  }

  reverse(P.begin(), P.end());

  for (auto p : P)
  {
    while (U.size() >= 2 and D(U[U.size() - 2], U[U.size() -1], p) < 0)
      U.pop_back();

    U.push_back(p);
  }

  L.pop_back();
  U.pop_back();

  L.reserve(L.size() + U.size());
  L.insert(L.end(), U.begin(), U.end()); 

  return L;
}

double distance(const Point& P, const Point& Q)
{
      return sqrt((P.x - Q.x)*(P.x - Q.x) + (P.y - Q.y)*(P.y - Q.y));
}

vector<Point> vet;

int main(){

  int n;
  int cont = 0;

  while(scanf("%d",&n)){


    if(n == 0) break;
    Point p;
    if(cont > 0)printf("\n");
    
    while(n--){
      cin >> p.x >> p.y;
      vet.push_back(p);
    }
    vet = monotone_chain_ch(vet);
    vet.push_back(vet[0]);

    double d = 0;

    for(int i = 0;i < vet.size() - 1;++i){
       d += distance(vet[i],vet[i+1]); 
    }

    printf("Region #%d:\n",++cont);
    for(int i = vet.size() - 1;i >= 0;--i){
      if(i == vet.size()-1)
      printf("(%.1lf,%.1lf)",vet[i].x,vet[i].y);
      else
      printf("-(%.1lf,%.1lf)",vet[i].x,vet[i].y);
       
    }
    printf("\n");
    printf("Perimeter length = %.2lf\n",d);
    vet.clear();
  }  

  return 0;
}
