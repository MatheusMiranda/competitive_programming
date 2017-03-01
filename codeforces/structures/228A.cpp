#include <iostream>
#include <set>

using namespace std;

set<int> s;

int main(){
  int a;
  int n=4;
  while(n--){
    cin >> a;
    s.insert(a); 
  }
  printf("%d\n",4-s.size());

  return 0;
}
