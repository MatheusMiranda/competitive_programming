#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

  string p1,p2;
    
  int n;
  cin >> n;   
  
  while(n--){ 
    int cont = 0;
    cin >> p1 >> p2;
  
    for(int i  =0;i < p1.size();++i){
      if(p1[i] <= p2[i]) cont += abs(p1[i] - p2[i]);
      else cont += ((26 - p1[i]) + p2[i]);
    }

    cout << cont << endl;
  
  }
  
  return 0;
}
