#include <bits/stdc++.h>

using namespace std;

using ll = long long;

vector<int> vet;

int dp(int l, int r, int ap){
  if(r < l){
    return 0;
    cout << "Entrou aki " << endl;
  }
  
  int min_ind = min_element(vet.begin() + l, vet.begin() + r + 1) - vet.begin();

  int cost = vet[min_ind] - ap;

  cost += dp(l, min_ind - 1, vet[min_ind]);
  cost += dp(min_ind + 1, r, vet[min_ind]);

  return min(r - l + 1, cost);
}

int main(){
  int n;
  scanf("%d",&n);
  int a;

  while(n--){
    cin >> a;
    vet.push_back(a);
  }
  
  int resp = dp(0, vet.size()- 1, 0);
  
  cout << resp << endl;

  return 0;
}
