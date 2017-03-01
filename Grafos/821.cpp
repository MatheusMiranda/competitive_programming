#include <iostream>
#include <set>

#define MAX 130
#define INF 500000000

using namespace std;

int matrizona[MAX][MAX];
set<int> dic;

int caso = 0;

int main(){

		int init,dest;

		while(scanf("%d %d",&init,&dest),init | dest){
				
				for(int i = 0;i < MAX;++i)
						for(int j = 0;j< MAX;++j)
									matrizona[i][j] = INF;

				dic.insert(init);
				dic.insert(dest);

				matrizona[init][dest] = 1;
				
				int a,d;

				while(scanf("%d %d",&a,&d),a | d){
						dic.insert(a);
						dic.insert(d);
						matrizona[a][d] = 1;
				}

				int maior = *(--dic.end());
	
				for(int k = 1; k <= maior;++k)
					for(int i = 1; i <= maior;++i)
						for(int j = 1; j <= maior;++j)
								matrizona[i][j] = min(matrizona[i][j],matrizona[i][k] + matrizona[k][j]);
				
				double media;
				int total = 0;
				int contador = 0;

				for(int i = 1;i <= maior;++i)
						for(int j = 1;j <= maior;++j)
							if(matrizona[i][j] != INF && i != j){
										 	total += matrizona[i][j];
											contador++;
							}
				

				media = (float)total/(float)contador;
				
				printf("Case %d: average length between pages = %.3f clicks\n",++caso,media);
	
				dic.clear();
		}




			return 0;
}

