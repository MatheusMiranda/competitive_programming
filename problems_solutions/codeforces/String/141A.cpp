#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

  string p1,p2,p3;
  cin >> p1 >> p2 >> p3;

  p1.append(p2);

  sort(p1.begin(),p1.end());
  sort(p3.begin(),p3.end());

  if(p1 == p3)printf("YES\n");
  else printf("NO\n");

  return 0;
}  
