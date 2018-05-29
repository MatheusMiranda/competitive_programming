#include <bits/stdc++.h>

using namespace std;
vector<int> primes {3,5,7,11,13,17,19,23,29,31};
int valids[30];

bool sum_is_valid(int sum){
  return binary_search(primes.begin(), primes.end(), sum);
}

void print_valid_rings(int n, vector<int> sol){
  if(sol.size() >= n){
    if(!sum_is_valid(sol[sol.size() - 1] + sol[0])) return;

    printf("%d", sol[0]);
    for(int i = 1;i < sol.size();++i){
      printf(" %d",sol[i]);
    }
    cout << endl;
    return;
  }

  int last = sol[sol.size() - 1];
  for(int i = 2;i <= n;++i){
    if(!valids[i] && sum_is_valid(last + i)){
      valids[i] = 1;
      sol.push_back(i);
      print_valid_rings(n, sol);
      valids[i] = 0;
      sol.pop_back();
    }
  }
}

int main(){
  int n;
  int caso = 0;
  
  while(cin >> n){
    memset(valids, 0, sizeof valids);
    if(caso) printf("\n");
    printf("Case %d:\n",++caso);
    vector<int> sol {1};
    valids[1] = 1;
    print_valid_rings(n, sol);
  }

  return 0;
}
