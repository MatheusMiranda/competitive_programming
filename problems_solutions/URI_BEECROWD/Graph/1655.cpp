#include <iostream>
#include <vector>

#define MAX 120
#define INF 0

double matrizona[MAX][MAX];
int p[MAX][MAX];

void printPath(int i, int j) {
  if (i != j) printPath(i, p[i][j]);
  printf(" %d", j);
}

int main(){

  int n,m;

  while(scanf("%d %d",&n,&m),n){

  int a,b;
	double c;

  for(int i = 0;i < MAX;++i)
    for(int k = 0;k < MAX;++k)
      matrizona[i][k] = INF;

  for(int i = 0;i < m;++i){
      scanf("%d %d %lf",&a,&b,&c);

			c*= 0.01;
      matrizona[a][b] = c;
      matrizona[b][a] = c;
  }

  for(int i = 1;i <= n;++i)
    for(int k = 1;k <= n;++k)
      p[i][k] = i;

  for(int k = 1;k <= n;++k)
    for(int i = 1;i <= n;++i)
      for(int j = 1;j <= n;++j)
        if(matrizona[i][k] * matrizona[k][j] > matrizona[i][j]){
            matrizona[i][j] = matrizona[i][k] * matrizona[k][j];
            p[i][j] = p[k][j];
        }

	printf("%.6lf percent\n",matrizona[1][n] * 100);

	}
  return 0;
}
