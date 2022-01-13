#include <iostream>
#include <cstring>

using namespace std;

int vetor[231];

int main(){

		int nc;
		scanf("%d",&nc);
		int n,num;

		while(nc--){
				memset(vetor,0,sizeof vetor);
				scanf("%d",&n);

				while(n--){
						scanf("%d",&num);
						vetor[num]++;
				}
				
				int contador = 0;

				for(int i = 20;i <= 230 ;++i){
						

								for(int j = 0;j < vetor[i];++j){
										if(contador++)printf(" %d",i);
										else printf("%d",i);
								}		
						
				
				}

				printf("\n");

		}				

		return 0;
}
