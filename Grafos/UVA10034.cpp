#include <iostream>

// Usa de prim e está imcompleto

using namespace std;

using dd = pair<double,double>;
using di = pair<double,int>;

#define MAX 110

dd vertices[MAX];
double dist[MAX][MAX];

double prim(int v){
  priority_queue<dl> pq;

  int u = 0;

  for(int v = 0;v <v;++v){

    if(u == v){
      continue;
    }

    pq.push(dl(dist))

  }


  return 0;
}


int main(){

  int T;
  scanf("%d",&T);

  for (int i = 0; i < T; ++i)
  {
      int n;
      scanf("%d",&n);

      for (int j = 0; j < n; ++j)
      {
        scanf("%d %d",&vertices[j].first,&vertices[j].second);
      }

      double d = prim();


      if(i) printf("\n");


  }


  return 0;
}
