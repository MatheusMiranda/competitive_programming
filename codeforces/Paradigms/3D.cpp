#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using par = pair<ll,ll>;

priority_queue<par> q;

int main(){
  string a;
  int ops = 0;
  cin >> a;
  ll op,cl;
  ll custo = 0; 

  if(a.size() %2 != 0) printf("-1\n");
  else{
    for(int i = 0;i < a.size();++i){
      if(a[i] == '(') ops++;
      else if(a[i] == ')')ops--;
      else{
        cin >> op >> cl;
        ops--;
        a[i] = ')';
        custo += cl;
        q.push(make_pair(cl-op,i));
      }
      
      if(ops < 0){
        if(q.empty()) break;
        par p = q.top(); q.pop();
        a[p.second] = '(';
        custo -= p.first;
        ops = 1;
      }

    }
      if(ops != 0) printf("-1\n");
      else{
        cout << custo << endl;
        cout << a << endl;
      }
  }

  return 0;
}
