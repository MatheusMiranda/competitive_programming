#include <iostream>

using namespace std;

using Point = pair<int,int>;

int main(){
  
  int n;
  cin >> n;

  Point p1,p2,p3,p4;

  int caso = 0;
    
  while(n--){

      scanf("%d %d %d %d",&p1.first,&p1.second,&p2.first,&p2.second);
      scanf("%d %d %d %d",&p3.first,&p3.second,&p4.first,&p4.second);

      int a3 = max(p1.first,p3.first);
      int b3 = min(p2.first,p4.first);
      int c3 = max(p1.second,p3.second);
      int d3 = min(p2.second,p4.second);

      int areaR1 = (p2.first - p1.first) * (p2.second - p1.second);
      int areaR2 = (p4.first - p3.first) * (p4.second - p3.second);

      int shared;

      if(a3 < b3 && c3 < d3)
        shared = (b3 - a3) * (d3 - c3);
      else
        shared = 0;

      printf("Night %d: %d %d %d\n",++caso,shared,(areaR1 - shared) + ( areaR2 - shared),10000 - (areaR1 - shared) - areaR2);   

     
  }

  return 0;
}
