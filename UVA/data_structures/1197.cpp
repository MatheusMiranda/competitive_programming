#include <bits/stdc++.h>

using namespace std;
#define MAX 30005
int ranks[MAX];
int pais[MAX];

vector<int> vet;

int find_pai(int n){
  if(n == pais[n]) return n;
  else return pais[n] = find_pai(pais[n]);
}

void make_union(int a,int b){
  int pa = find_pai(a);
  int pb = find_pai(b);

  if(pa == pb) return;
  if(ranks[pa] >= ranks[pb]){
    pais[pb] = pa;
    ranks[pa] += ranks[pb];
  }else{
    pais[pa] = pb;
    ranks[pb] += ranks[pa];
  }
}

int main(){
  int n,m;

  while(cin >> n >> m, n | m){
    for(int i = 0;i < MAX;++i){
      pais[i] = i;
    }
    for(int i = 0;i < MAX;++i){
      ranks[i] = 1;
    }
    
    int k,a;
    while(m--){
      vet.clear();
      cin >> a;
      while(a--){
        cin >> k;
        vet.push_back(k);
      }

      for(int i = 1;i < vet.size();++i){
        make_union(vet[i], vet[i-1]); 
      }
    }

    int cont = 0;
    int resp = find_pai(0);
    for(int i = 0;i < n;++i){
      if(find_pai(i) == resp)cont++;
    }
    cout << cont << endl;
  }

}
