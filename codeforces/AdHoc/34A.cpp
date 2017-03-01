#include <iostream>
#include <vector>

using namespace std;
vector<int> vet;
int main(){
  
  int n,a,ind1,ind2,dist = 1<<30;
  cin >> n;
  
  for(int i = 0;i < n;++i){
    cin >> a;
    vet.push_back(a);
    if(i > 0){
      if(abs(vet[i] - vet[i-1]) < dist){
        dist = abs(vet[i] - vet[i-1]);
        ind1 = i;ind2 = i - 1;
      }  
    }  
  } 

  if(abs(vet[0] - vet[n - 1]) < dist){
      ind1 = 0;ind2 = n-1;
  }   

  cout << ind1 + 1 << " " << ind2 + 1 << endl;

  return 0;
}

