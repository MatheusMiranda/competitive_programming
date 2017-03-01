#include <iostream>
#include <map>

using namespace std;

map<int,int> direito;
map<int,int> esquerdo;
map<int,int> valores;

int main(){

		int n;
		char pe;
		int tam;
		int contador;

		while(scanf("%d",&n) != EOF){

			contador = 0;

			for(int i = 0;i < n;++i){
					scanf("%d %c",&tam,&pe);
				
					if(pe == 'D'){
							if(!direito[tam]){
										 	direito[tam] = 1;
							}
							else direito[tam]++;

							valores[tam] = 1;
					}else{
							if(!esquerdo[tam]){
										 	esquerdo[tam] = 1;
							}				
							else esquerdo[tam]++;

							valores[tam] = 1;
					}

			}

			for(auto it : valores){
					contador+= min(direito[it.first],esquerdo[it.first]);
			}				

			printf("%d\n",contador);
			direito.clear();
			esquerdo.clear();
			valores.clear();
		}
		
			return 0;
}
