#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ponto = pair<double,double>;
using pol = pair<char,vector<double> >;

vector<pol> polis;

int main(){
  
  char a;
  double d1,d2,d3,d4,d5,d6;
    
  while(cin >> a){
    pol poligono;

    if(a == '*') break;

    if(a == 'r'){
        cin >> d1 >> d2 >> d3 >> d4;
        poligono.first = a;
        poligono.second.push_back(d1);
        poligono.second.push_back(d2);
        poligono.second.push_back(d3);
        poligono.second.push_back(d4);
        polis.push_back(poligono);
    }  
    else if(a == 'c'){
        cin >> d1 >> d2 >> d3;
        poligono.first = a;
        poligono.second.push_back(d1);
        poligono.second.push_back(d2);
        poligono.second.push_back(d3);
        polis.push_back(poligono);
    }
    else if(a == 't'){
        cin >> d1 >> d2 >> d3 >> d4 >> d5 >> d6;
        poligono.first = a;
        poligono.second.push_back(d1);
        poligono.second.push_back(d2);
        poligono.second.push_back(d3);
        poligono.second.push_back(d4);
        poligono.second.push_back(d5);
        poligono.second.push_back(d6);
        
        polis.push_back(poligono);
    }   


  }


  ponto pt;
  double x;
  double y;

  while(1){
    
    cin >> x >> y;
    if(x == 9999.9 && y == 9999.9)break;

        



  }  


  return 0;
}

