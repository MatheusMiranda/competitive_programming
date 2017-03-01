#include <bits/stdc++.h>

using namespace std;

vector<string> vet = {"012","102","120","210","201","021"};

int main(){

  long long n;
  long long x;

  cin >> n >> x;
   
  cout << vet[n % 6][x] << endl;
    
  return 0;
}
