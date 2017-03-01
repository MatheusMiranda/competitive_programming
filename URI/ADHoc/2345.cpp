#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> vet;

int main(){

  long long a,b,c,d;
  
  cin >> a >> b >> c >> d;

  vet.push_back(a);
  vet.push_back(b);
  vet.push_back(c);
  vet.push_back(d);

  sort(vet.begin(),vet.end());

  cout << abs((vet[0] + vet[3]) - (vet[1]+vet[2])) << endl;

  return 0;
}

