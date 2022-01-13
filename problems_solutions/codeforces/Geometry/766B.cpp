#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool test(int a,int b, int c){
    if(a + b > c && a + c > b  && c + b > a) return true;
    else return false;
}

vector<int> vet;

int main(){
  
  int n,a;
  cin >> n;

  while(n--){
    cin >> a;
    vet.push_back(a);
  }

  sort(vet.begin(),vet.end());
  
  int flag = 0;

  for(int i = 0;i < vet.size() - 2;++i){
    if(test(vet[i],vet[i+1],vet[i+2])){
      flag = 1;
      break;
    } 
  } 

  if(flag ) cout << "YES\n";
  else printf("NO\n");

  return 0;
}
