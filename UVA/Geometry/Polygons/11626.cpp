#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;
class Point {
  public:
    ll x;
    ll y;

    Point(ll xv = 0, ll yv = 0) : x(xv), y(yv) {}

    bool operator<(const Point& P) const
    {
      return x == P.x ? y < P.y : x < P.x;
    }
};

ll D(const Point& P, const Point& Q, const Point& R)
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

vector<Point> vet;

int main(){

  int n;
  cin >> n;

  int a;
  int cont;
  while(n--){
    cin >> a;
    Point p;
    cont = 0;
    char letra;

    while(a--){
      cin >> p.x >> p.y >> letra;
      if(letra == 'Y') cont++;
      vet.push_back(p);
    }

    printf("%d\n",cont);
  
    vet = monotone_chain_ch(vet);  

    for(int i =0;i < vet.size();++i){
      printf("%lld %lld\n",vet[i].x,vet[i].y);
    } 
   
    vet.clear();
  }  


  return 0;
}
