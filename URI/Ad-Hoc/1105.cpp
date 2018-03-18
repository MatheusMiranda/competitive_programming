#include <bits/stdc++.h>

using namespace std;
int saldos[23];
using par = pair<int,int>;
vector < pair<int,par> > vet;

bool func(pair<int,par> a, pair<int,par> b){
  return a.first < b.first;
}

int main(){
  int b,n;
  bool flag;
  int val;

  while(scanf("%d %d",&b,&n),b | n){
    flag = true;
    memset(saldos, 0, sizeof saldos);
    
    for(int i = 1;i <= b;++i){
      cin >> val;
      saldos[i] = val;
    }

    int ori,dest,vl;
    while(n--){
      cin >> ori >> dest >> vl;
      vet.push_back(make_pair(vl,par(ori,dest)));
    }

    sort(vet.begin(),vet.end(),func);
    
    int saldo, dev;
    for(auto el : vet){
      int dev = el.first;
      int saldo = saldos[el.second.first];

      saldos[el.second.first] -= dev;
      saldos[el.second.second] += dev;
    }

    for(auto el : saldos){
      if(el < 0){
        flag = false;
        break;
      }
    }

    if(flag) cout << "S" << endl;
    else cout << "N" << endl;

    vet.clear();
  }

  return 0;
}
