#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

int main(){
		
	string linha;
	string palavra;
	int soma;
	double media;
	int contador;
	while(getline(cin,linha)){
			soma = 0;
			contador = 0;

			stringstream ss(linha);
			while(ss >> palavra){
					contador++;
					int flag = 1;
					int ponto = 0;
					int i;
					for(i = 0;i < palavra.size();++i){
							if(!isalpha(palavra[i])){
									flag = 0;				
									break;
							}else if(palavra[i] == '.'){
									soma+=(i+1);
									flag == 2;
									ponto = i;
							}				
					}

					if(flag == 2) soma+= (i+1) - ponto;	

					if(flag == 1) soma+=(int)palavra.size();
			}		

			media = (double)soma/(double)contador;


			if(media <= 3.0) printf("250\n");
			else if(media >= 6.0) printf("1000\n");
			else printf("500\n");

	}
	
	return 0;
}
