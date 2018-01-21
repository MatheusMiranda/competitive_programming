#include <bits/stdc++.h>

using namespace std;

map<int, set<int> > dic;
vector<int> vet;

bool func(int p1,int p2){
  return p1 < p2;
}

int main(){
  int a,b,c;
  int caso = 0;

  while(scanf("%d %d",&a,&b),a | b){
    for(int i = 1;i <= a;++i){
      scanf("%d",&c);
      vet.push_back(c);
    }

    sort(vet.begin(),vet.end(),func);

    for(int i = 0;i < vet.size();++i){
      dic[vet[i]].insert(i + 1);
    }

    int q;
    printf("CASE# %d:\n",++caso);
    while(b--){
      scanf("%d",&q);

      if(!dic[q].empty()){
        std::set<int>::iterator it=dic[q].begin();
        printf("%d found at %d\n",q,*it);
      }else{
        printf("%d not found\n",q);
      }
    }
    vet.clear();
    dic.clear();
  }
}
