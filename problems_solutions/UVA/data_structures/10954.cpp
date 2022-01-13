#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;
priority_queue<ll,vector<ll>, greater<ll> > q;

int main(){
  ll a,b;
  while(cin >> a,a){
    for(int i = 0;i < a;++i){
      scanf("%lld",&b);
      q.push(b);
    }
    
    ll s = 0, c= 0;
    while(!q.empty()){
      s = q.top();q.pop();

      if(q.empty()) break;
    
      s = s + q.top();
      q.pop();

      c += s;
      q.push(s);
    }

    cout << c << endl;
  }

  return 0;
}
