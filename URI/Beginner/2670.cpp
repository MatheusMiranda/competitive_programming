#include <bits/stdc++.h>

using namespace std;
vector<int> vet;

int main(){
  int a,b,c;
  cin >> a >> b >> c;

  int c1 = 2 * b + 4 * c;
  int c2 = 2 * a + 2 * c;
  int c3 = 2 * b + 4 * a;

  cout << min(c1,min(c2,c3)) << endl;

  return 0;
}
