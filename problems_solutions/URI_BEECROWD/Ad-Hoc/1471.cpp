#include <iostream>
#include <cstring>

using namespace std;

int visitados[10100];

int main(){

		int n,m;
		int num;

		while(scanf("%d %d",&n,&m) != EOF){
				memset(visitados,0,sizeof visitados);
				while(m--){	
						scanf("%d",&num);
						visitados[num] = 1;
				}
				int contador = 0;

				for(int i = 1;i <= n;++i){
						if(visitados[i] == 0){
								printf("%d ",i);
								contador++;
						}
				}				
				
				if(contador == 0) printf("*");
				printf("\n");


		}

		return 0;
}
