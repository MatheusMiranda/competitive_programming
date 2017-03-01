#include <iostream>
#include <cstring>

using namespace std;

int matrizona[4][4];

using ii = pair<int,int>;

ii us[] {ii(1,0),ii(-1,0),ii(0,1),ii(0,-1)};

int main(){

  int valor;

  for(int i = 1;i <= 3;++i){
    for(int j = 1;j <= 3;++j){
      cin >> matrizona[i][j];
    }
  }

  int soma = 0;

  for(int i = 1;i <= 3;++i){
    for(int j = 1;j <= 3;++j){
      soma = 0; 
      for(auto it : us){
        int novoi = i + it.first;
        int novoj = j + it.second;

        if(novoi < 4 && novoi > 0 &&  novoj < 4 && novoj > 0){
            soma += matrizona[novoi][novoj];
        }  
      } 
      soma += matrizona[i][j];
      soma +=1;
      cout << soma %2;
    }
    cout << endl;
  }

  return 0;
}
