#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

#define MAX 210

typedef struct aresta{

	 int origem;
	 int destino;
	 int valor;

}aresta;

aresta arestas[MAX];
int ranks[MAX];
int pais[MAX];

bool my_function(aresta a1,aresta a2){
			
			return a1.valor < a2.valor;				
	
}

int acha_pai(int no){

		if(pais[no] == no)
			return no;
		else
			return acha_pai(pais[no]);
}

void faz_uniao(int no1,int no2){

			int pai_no1 = acha_pai(no1);			
			int pai_no2 = acha_pai(no2);			

			if(ranks[pai_no1] >= ranks[pai_no2]){
							ranks[pai_no1]++;
							pais[pai_no2] = pais[pai_no1];
			}
			else{
							ranks[pai_no2]++;
							pais[pai_no1] = pais[pai_no2];
			}
}

int main(){

		int r,c;
		
		scanf("%d %d",&r,&c);

		memset(ranks,0,sizeof ranks);

		for(int i = 0;i < c;++i){
				
				scanf("%d %d %d",&arestas[i].origem,&arestas[i].destino,&arestas[i].valor);				
		}

		for(int j = 0;j < c;++j){

				pais[j] = j;

		}

		sort(arestas,arestas+c,my_function);		
		
		int total = 0;		
		
		for(int k = 0;k < c;++k){
			
				if(acha_pai(arestas[k].origem) != acha_pai(arestas[k].destino)){

							faz_uniao(arestas[k].origem,arestas[k].destino);
							total+=arestas[k].valor;		
				}

		}				

		printf("%d\n",total);

  return 0;
}
