#include <string>
#include <bits/stdc++.h>

using namespace std;

set<string> a;

void permute(string p,int l,int r){
  int i;
  if(l == r) a.insert(p);
  else{
    for(int i =l;i <= r;i++){
      swap(p[l],p[i]);
      permute(p,l+1,r); 
      swap(p[l],p[i]);
    }
  }
}

int main(){

  string p;
  while(1){
    cin >> p;

    if(p == "#") break;

    int s = p.size();

    permute(p,0,s-1);

    int i = 0;

    for(auto el : a){
      i++;
      if(el == p){
           printf("%10d\n",i);
           break;
      }
    } 

    a.clear();

  }

  return 0;
}
