#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

  int n;
  string linha;

  cin >> n;
  int a= n;

  while(n--){
    getline(cin,linha);
  }
 
  if(a % 2 == 0) printf("home\n");
  else printf("contest\n");

  return 0;
}
