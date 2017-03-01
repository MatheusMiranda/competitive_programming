#include <iostream>
#include <vector>

using namespace std;

int main(){

  int n;
  vector<int> vet;

  cin >> n;

  int a;
  int maior = -1;
  int menor = 1<<30;
  int indMenor;
  int indMaior;
  for(int i =0;i < n;++i){
    cin >> a;
    if(a <= menor){
      menor = a;
      indMenor = i;
    }
    if(a > maior){
      maior = a;
      indMaior = i;
    }  

    vet.push_back(a);
  }
  

  if(indMaior > indMenor)
     indMenor++;

     indMenor = n - (indMenor+1);
    
  printf("%d\n",indMaior + indMenor);


  return 0;
}
