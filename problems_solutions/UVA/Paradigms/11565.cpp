#include <iostream>

using namespace std;

int main(){
  long long n,a,b,c;
  cin >> n;
  bool teste = false;
 
  while(n--){
    
    cin >> a >> b >> c;

    for(long long i = -100;i <= 100;++i){
      if(teste)break;
      for(long long j = -100;j <= 100;++j){
        if(teste) break;
        for(long long z = -100;z <= 100;++z){    
           if(teste) break;  
           if(i != j && i != z && j != z && !teste && i + j + z == a && i * j * z == b && i * i + j * j + z * z == c){
              cout << i <<  " " << j <<  " " << z << endl;
              teste = true;
              break;
           }   
        }
      }  
    }  

    if(teste == false) cout << "No solution." << endl;
    teste = false;
  }

  return 0;
}
