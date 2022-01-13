#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> vet;

int main(){

  int n;
  cin >> n;

  while(n--){
      int a,b,c,d;

      vet.clear();

      cin >> a >> b >> c >> d;

      vet.push_back(a);
      vet.push_back(b);
      vet.push_back(c);
      vet.push_back(d);

      if(a == b && b == c && c == d){ 
          printf("square\n");
          continue;
      }
      sort(vet.begin(),vet.end());

      if(vet[0] == vet[1] && vet[2] == vet[3]) printf("rectangle\n");
      else if(a + b + d <= c || b + c + d <= a || a + d + c <= b || a + c + b <= d) printf("banana\n");
      else printf("quadrangle\n");
  } 


  return 0;
}
