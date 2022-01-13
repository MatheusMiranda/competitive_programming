#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using Point = pair<double,double>;
vector<Point> pontos;

bool func(Point p1,Point p2){
    
    if(p1.second == p2.second) return p1.first > p2.first;
    return p1.second < p2.second;
} 

int main(){
  
  int n;
  scanf("%d",&n);
  int c;
  Point p, centro;

  while(n--){
      scanf("%d",&c);
      
      for(int i = 0;i < c;++i){
          scanf("%lf %lf",&p.first,&p.second);
          pontos.push_back(p);
      }  

      sort(pontos.begin(),pontos.end(),func); 

      int fim = c - 1;
      bool has_point = true;
      double x,y;

      for(int i = 0;i < c;++i){

          if(i >= c)break;
          
          x = (pontos[i].first + pontos[fim].first) /2.0;
          y = (pontos[i].second + pontos[fim].second) /2.0;

          if(i == 0){
            centro.first = x;
            centro.second = y;
          }

          if(centro.first != x || centro.second != y){
             has_point = false;
             break;
          } 

          fim--;

      }  
        
      if(has_point)printf("yes\n");
      else printf("no\n");

      pontos.clear();

  } 

  return 0;
}
