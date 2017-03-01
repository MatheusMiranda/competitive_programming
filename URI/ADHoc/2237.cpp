#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <map>
#include <limits>

using namespace std;
using ii = pair<int,int>;
using vi = vector<int>;
using estado = pair<int,vi>;

map<vi,int> dist;

vi destino;
vi inicial;

ii us[] {ii(0,4),ii(1,5),ii(2,6),ii(3,7),ii(0,1),ii(2,3),ii(1,2),ii(4,5),ii(6,7),ii(5,6)};

#define INF numeric_limits<int>::max()

int func(){
     
      priority_queue<estado,vector<estado>, greater<estado> > pq;

      pq.push(estado(0,inicial)); 
      dist[inicial] =0;

      while(!pq.empty()){
          estado atual = pq.top(); pq.pop();
          int d = atual.first;
          int dis_atual = dist[atual.second];
          if(d > dis_atual)continue;
        
          for(int i = 0;i < 10;++i){
              
              if(atual.second[us[i].first] == atual.second[us[i].second] ) continue;
              int peso = atual.second[us[i].first] + atual.second[us[i].second];  
      
              swap(atual.second[us[i].first],atual.second[us[i].second]);

              if(dist.find(atual.second) == dist.end()) dist[atual.second] = INF;
              if(d + peso < dist[atual.second]){  
                dist[atual.second] = d + peso;
                pq.push(estado(d + peso,atual.second)); 
              }


              swap(atual.second[us[i].first],atual.second[us[i].second]);
          }  

      }


     return dist[destino];
}  

int main(){

  int n;

  for(int i = 0;i < 8;++i){
    scanf("%d",&n);
    inicial.push_back(n);
  }  
  
  for(int i = 0;i < 8;++i){
    scanf("%d",&n);
    destino.push_back(n);
  }


  printf("%d\n",func());    

  return 0;
}
