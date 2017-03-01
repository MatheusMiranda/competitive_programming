#include <iostream>
#include <sstream>
#include <string>

using namespace std;

#define PI 3.141592653589793


int main(){

  int n;
  scanf("%d",&n);

  int num1,num2;
  string linha;

  int a;
  int cont;
  getchar(); 
  double a1,a2;
  double atotal,rtotal;
  while(n--){

    num1 = -1;
    num2 = -1;

    getline(cin,linha);
    stringstream ss(linha);
    cont = 0;
    while(ss >> a){
      if(cont == 0) num1 = a;
      else num2 = a;
      cont++;
    }

    if(cont == 2) {
      a1 = PI * (num1 * num1);                    
      a2 = PI * (num2 * num2);                    

      rtotal = num1 + num2;
      atotal = PI * (rtotal * rtotal); 

      printf("%.4lf\n",atotal - (a1+a2));
    }else{
      double t = num1;
      double raio = t/4.0;

      a1 = PI * (raio * raio);                    
      a2 = a1;                    

      rtotal = t/2.0;
      atotal = PI * (rtotal * rtotal); 

      printf("%.4lf\n",atotal - (a1+a2));

    } 

  }

  return 0;
}
