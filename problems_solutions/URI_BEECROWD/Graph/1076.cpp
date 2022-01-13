#include <bits/stdc++.h>

using namespace std;

vector<int> vet[50];
int visited[50];

int dfs(int no){

  visited[no] = 1;

  int cont = 0;

  int s = vet[no].size();
  for(int i = 0;i < s;++i){
    if(!visited[vet[no][i]]){
        cont += 2 + dfs(vet[no][i]);    
    }
  }

  return cont; 
}

int main(){

  int t;
  int n,v,a;

  scanf("%d",&t);

  while(t--){
    memset(visited,0,sizeof visited);
    scanf("%d %d %d",&n,&v,&a);
    int ori,dest;
    for(int i = 0;i < a;++i){
      scanf("%d %d",&ori,&dest);
      vet[ori].push_back(dest);
      vet[dest].push_back(ori);
    }    

    int resp = dfs(n);
    
    cout << resp << endl;
    
    for(int i = 0;i < v;++i) vet[i].clear();

  }

  return 0;
}
