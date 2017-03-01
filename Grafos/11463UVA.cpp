#include <iostream>
#include <queue>

using namespace std;

#define MAX 120
#define INF 500000000

int matrizona[MAX][MAX];

int main(){

		int t;

		scanf("%d",&t);

		int n,r;
		int ori,dest,peso;
	
		for(int a = 0;a<t;++a){		
		
				scanf("%d",&n);
				scanf("%d",&r);

				for(int i = 0;i <= n;++i)
						for(int j = 0;j<=n;++j)
								matrizona[i][j] = INF;

				for(int b = 0;b < r;++b){

						scanf("%d %d",&ori,&dest);
						matrizona[ori][dest] = 1;
						matrizona[dest][ori] = 1;	

				}

				int partida,destino;

				scanf("%d %d",&partida,&destino);

				for(int k =0;k < n;++k)
						for(int i =0;i<n;++i)
							for(int j = 0;j< n;++j)
									matrizona[i][j] = min(matrizona[i][j],matrizona[i][k] + matrizona[k][j]);
					
				int soma = 0;
				for(int i = 0;i < destino;++i)	
						soma+= matrizona[partida][i];

				printf("SOma = %d",soma);
			
		}

		return 0;
}
