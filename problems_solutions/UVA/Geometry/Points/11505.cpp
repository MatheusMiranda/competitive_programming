#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

using ii = pair<string,int>;

map<string,int> dic;

using Point = pair<double,double>;

#define PI 3.141592653589793

int main(){

  int n;
  scanf("%d",&n);
  int m;
  string comando;
  int val;

  
while(n--){

    scanf("%d",&m);
  Point p(0.0,0.0);
  int teta = 0;

    for(int i = 0;i< m;++i){
      cin >> comando >> val;

      if(comando == "fd"){
        p.first += val * cos(teta * PI/180.0);
        p.second += val * sin(teta * PI/180.0);
      }  
      else if(comando == "bk"){
        p.first -= val * cos(teta * PI/180.0);
        p.second -= val * sin(teta * PI/180.0);
      }
      else if(comando == "lt"){
        teta += val;
        teta = fmod(teta,360);
      }  
      else{
        teta -= val;
        teta = fmod(teta,360);
      }           
    }


  double res = sqrt(p.first * p.first + p.second * p.second);
  printf("%0.lf\n", res);

}

return 0;
}

