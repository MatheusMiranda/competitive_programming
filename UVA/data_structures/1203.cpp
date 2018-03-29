#include <bits/stdc++.h>

using namespace std;

using par = pair<int,int>;
map<int,int> dic;

priority_queue<par, vector<par>, greater<par> > q;

int main(){
  string a;
  int b,c;
  while(1){
    cin >> a;
    if(a == "#") break;
    cin >> b>> c;
    dic[b] = c;

    q.push(make_pair(c,b));
  }
  
  int n;
  cin >> n;

  while(n--){
    par a = q.top();q.pop();


    printf("%d\n",a.second);
    q.push(make_pair(a.first + dic[a.second],a.second));
  }

  return 0;
}
