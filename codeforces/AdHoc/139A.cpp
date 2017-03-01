#include <iostream>
#include <vector>

using namespace std;
vector<int> vet;

int main(){

  int n;
  cin >> n;
  int num;

  for(int a  =1;a <= 7;++a){
      cin >> num;
      vet.push_back(num);
  } 

  int i = 1;
  while(n > 0){
    if(i == 8) i = 1;
    n -= vet[i-1];
    ++i;
  }  

  cout << i - 1 << endl;

  return 0;
}
