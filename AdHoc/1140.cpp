#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){

		string linha;
		
		while(getline(cin,linha)){
				if(linha == "*")break;

				char menor = tolower(linha[0]);
				char maior = toupper(linha[0]);			

				int contador = 0;	
				int flag = 0;

				for(int i = 0;i < linha.size();++i){
						
						if(contador == 0){
								if(linha[i] != menor && linha[i] != maior){
										flag = 1;
										break;
								}
								contador++;				
						}else{
								contador++;
						}				
								
						if(linha[i] == ' ') contador = 0;
				}
			
				if(flag == 0) printf("Y\n");
				else printf("N\n");

		}
	
		return 0;
}
