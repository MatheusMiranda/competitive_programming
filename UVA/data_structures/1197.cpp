#include <bits/stdc++.h>

using namespace std;
#define MAX 30005
int ranks[MAX];
int parents[MAX];

vector<int> vet;

int find_parent(int n){
  if(n == parents[n]) return n;
  else return parents[n] = find_parent(parents[n]);
}

void make_union(int a,int b){
  int pa = find_parent(a);
  int pb = find_parent(b);

  if(pa == pb) return;
  if(ranks[pa] >= ranks[pb]){
    parents[pb] = pa;
    ranks[pa] += ranks[pb];
  }else{
    parents[pa] = pb;
    ranks[pb] += ranks[pa];
  }
}

int main(){
  int n,m;

  while(cin >> n >> m, n | m){
    for(int i = 0;i < MAX;++i){
      parents[i] = i;
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
    int resp = find_parent(0);
    for(int i = 0;i < n;++i){
      if(find_parent(i) == resp)cont++;
    }
    cout << cont << endl;
  }

}
