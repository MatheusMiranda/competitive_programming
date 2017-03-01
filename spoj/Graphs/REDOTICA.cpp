#include <bits/stdc++.h>

using namespace std;

#define MAX 400

typedef struct edge{
  int ori;
  int dest;
  int cost;
}edge;

bool func(edge e1,edge e2){
    if(e1.cost == e2.cost) return e1.ori < e2.ori;
    return e1.cost < e2.cost;
}

int ranks[MAX];
int parent[MAX];
edge edges[MAX];
vector<edge> vet;

int find_parent(int no){
  if(no != parent[no]) return parent[no] = find_parent(parent[no]);
  return no;
}

void make_union(int no1,int no2){
  int parent1 = find_parent(no1);
  int parent2 = find_parent(no2);

  if(ranks[parent1] > ranks[parent2]){
    parent[no2] = parent1;
    parent[parent2] = parent1;
    ranks[parent1]++;
  }else{
    parent[no1] = parent2;
    parent[parent1] = parent2;
    ranks[parent2]++;
  } 
}

int main(){

  int m,n;
  int ori,dest,c;
  int caso = 0;

  while(scanf("%d %d",&n,&m), n){
   
    memset(ranks,0,n+2);
    for(int i = 1;i <= n;++i) parent[i] = i;
    
    for(int i = 1;i <= m;++i){
      scanf("%d %d %d",&edges[i].ori,&edges[i].dest,&edges[i].cost);
    }           

    sort(edges,edges+m,func);

    for(int i = 1;i <= m;++i){
      if(find_parent(edges[i].ori) != find_parent(edges[i].dest)){
        make_union(edges[i].ori,edges[i].dest);
        vet.push_back(edges[i]);
      }
    }
      
    printf("Teste %d\n",++caso);
 
    for(int i = 0;i < vet.size();++i) printf("%d %d\n",vet[i].ori,vet[i].dest);

    vet.clear();
    printf("\n"); 
  }

  return 0;
}
