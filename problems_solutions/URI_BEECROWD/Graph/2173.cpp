#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

#define MAX 100100 

typedef struct arest{
	
	int ori;
	int dest;
	int valor;

}aresta;

aresta arestas[MAX];
int ranks[MAX];
int pais[MAX];

bool func(aresta a1,aresta a2){

		return a1.valor < a2.valor;
}	

bool func2(aresta a1,aresta a2){

		return a1.valor > a2.valor;
}	

int acha_pai(int no){
		if(pais[no] == no)return no;
		else return(acha_pai(pais[no]));
}	

void faz_uniao(int no1,int no2){
		int pai_1 = acha_pai(no1);
		int pai_2 = acha_pai(no2);

		if(pai_1 >= pai_2){
				pais[pai_2] = pai_1;
				ranks[pai_1]++;
		}else{
				pais[pai_1] = pai_2;
				ranks[pai_2]++;
		}		


}	

int main(){
	
	int n,m;

	while(scanf("%d %d",&n,&m), n | m){
			memset(ranks,0,sizeof ranks);

			for(int i = 0;i < m;++i){
					scanf("%d %d %d",&arestas[i].ori,&arestas[i].dest,&arestas[i].valor);
			}
			
			for(int i = 0;i < n;++i){
					pais[i] = i;
			}

			sort(arestas,arestas+m,func);

			int total1 = 0;

			for(int i = 0;i < m;++i){
						if(acha_pai(arestas[i].dest) != acha_pai(arestas[i].ori)){
									faz_uniao(arestas[i].ori,arestas[i].dest);
									total1 += arestas[i].valor;
						}

			}	

			sort(arestas,arestas+m,func2);

			int total2 = 0;


			for(int i = 0;i < n;++i){
					pais[i] = i;
			}
			
			memset(ranks,0,sizeof ranks);
			for(int i = 0;i < m;++i){
				if(acha_pai(arestas[i].dest) != acha_pai(arestas[i].ori)){
					faz_uniao(arestas[i].ori,arestas[i].dest);
					total2 += arestas[i].valor;
				}

			}	


			printf("%d\n",total2 - total1);
			
				
	}


	return 0;
}
