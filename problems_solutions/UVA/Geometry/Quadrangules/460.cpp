#include <iostream>

using namespace std;
using point = pair<int,int>;

int main(){
  
  int n;
  point p1,p2,p3,p4;

  scanf("%d",&n);
  int caso = 0;

  while(n--){
      scanf("%d %d %d %d",&p1.first,&p1.second,&p2.first,&p2.second);
      scanf("%d %d %d %d",&p3.first,&p3.second,&p4.first,&p4.second);

      int a3 = max(p1.first,p3.first);
      int b3 = min(p2.first,p4.first);
      int c3 = max(p1.second,p3.second);
      int d3 = min(p2.second,p4.second);
    
      int shared;

      if(caso++) printf("\n");  
      if(a3 < b3 && c3 < d3)
        cout << a3 << " " << c3 << " " << b3 << " " << d3 << endl;
      else
        cout << "No Overlap" << endl;

  }  

  return 0;
}
