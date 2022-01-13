#include <bits/stdc++.h>

using namespace std;

vector<int> vet;

int main(){

  long long sum = 0;  

  int n;
  scanf("%d",&n);
  int a;

  for(int i = 1;i <= n;++i){
    scanf("%d",&a);
    vet.push_back(a);
  }

  sort(vet.begin(),vet.end());

  for(int i = 1;i <= n;++i){
    sum += abs(i - vet[i - 1]);
  }

  cout << sum << endl; 

  return 0;
}
