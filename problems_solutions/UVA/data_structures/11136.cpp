#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;

int main(){
  ll n,a,b;
  while(cin >> n, n){
    ll total = 0;
    priority_queue<int, vector<int>, greater<int> > pq1;
    priority_queue<int> pq2;
    int vetorzao[1000007];
    memset(vetorzao, 0, sizeof vetorzao);
    while(n--){
      cin >> a;
      while(a--){
        cin >> b;
        pq1.push(b);
        pq2.push(b);
        vetorzao[b]++;
      }

      ll t,y;
      while(1){
        t = pq1.top();pq1.pop();
        if(vetorzao[t] > 0){
          vetorzao[t]--;
          break;
        }
      }
      while(1){
        y = pq2.top();pq2.pop();
        if(vetorzao[y] > 0){
          vetorzao[y]--;
          break;
        }
      }

      total += y - t;
    }
    cout << total << endl;
  }

  return 0;
}
