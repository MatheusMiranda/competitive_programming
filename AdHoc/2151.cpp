#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

using ii = pair<int,int>;
using iii = pair<ii,int>;

int a,b,c,d;

ii us[] {ii(-1,0),ii(0,-1),ii(1,0),ii(0,1),ii(1,1),ii(-1,1),ii(-1,1),ii(-1,-1)};

int matrizona[120][120];
int visitados[120][120];

queue<iii> fila;

void bfs(int opa1,int opa2){

		fila.push(iii(ii(opa1,opa2),10));

		while(!fila.empty()){

						iii par = fila.front();fila.pop(); 

						int x = par.first.first;
						int y = par.first.second;	
						int z = par.second;

						if(z == 0) z = 1;
						
						visitados[x][y] = 1;
						matrizona[x][y] += z;

						for(auto it : us){

										int aux = x+it.first;
										int aux2=	y+it.second;

										if(aux >= 1 && aux<= a && aux2 >= 1 && aux2 <= b){	
														if(visitados[aux][aux2] == -1){
																		fila.push(iii(ii(aux,aux2),z - 1));																						
														}
										}
						}

		}		

}				

int main(){

		int n;
		int caso = 0;

		scanf("%d",&n);
		while(n--){
				memset(visitados,-1,sizeof visitados);
						
				scanf("%d %d %d %d",&a,&b,&c,&d);

				for(int i = 1;i <= a;++i)
							for(int j = 1;j <= b;++j)
											scanf("%d",&matrizona[i][j]);

				bfs(c,d);	
				
				printf("Parede %d:\n",++caso);

				for(int i = 1;i <= a;++i){
							for(int j = 1;j <= b;++j){
											if(j!=1)printf(" %d",matrizona[i][j]);	
											else printf("%d",matrizona[i][j]);
							}				

				printf("\n");
				}
		}

}
