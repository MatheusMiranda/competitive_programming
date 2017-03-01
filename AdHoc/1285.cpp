#include <iostream>
#include <map>
#include <string>

using namespace std;

map<char,int> dic;

int main(){
	int a,b;

	while(scanf("%d %d",&a,&b) != EOF){
			
			int contador = 0;
			string numero;

			for(int i = a; i <= b;++i){
					numero = to_string(i);	
					int tam = numero.size();
					int flag = 1;

					for(int j = 0;j < tam;++j){
							if(!dic[numero[j]]) dic[numero[j]] = 1;
							else{
									flag = 0;
									break;
							}					
					}	
					if(flag == 1){
						contador++;				
					}
		dic.clear();
			}				

			printf("%d\n",contador);

					
	}				

	return 0;
}
