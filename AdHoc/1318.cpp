#include <iostream>
#include <map>
#include <cstring>

using namespace std;

map<int,int> dic;

int copiado[10100];

int main(){
		
		int n,m;
		int numero;
		int contador;

		while(scanf("%d %d",&n,&m),n | m){
		
			memset(copiado,0,sizeof copiado);

			contador = 0;			
			for(int i = 0;i < m;++i){
					cin >> numero;
						
					if(dic[numero] && copiado[numero] == 0){
									copiado[numero] = 1;
								 	contador++;
					}				

					dic[numero] = 1;

			}

			printf("%d\n",contador);
			dic.clear();

		}

		return 0;
}
