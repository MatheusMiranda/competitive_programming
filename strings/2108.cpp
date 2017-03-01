#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main(){

		string linha;
		string palavra;
		int maior = -1;
		string maiorP;
		int contador;

		while(1){
				getline(cin,linha);
				contador = 0;

				if(linha == "0") break;

				stringstream ss(linha);
				while(ss >> palavra){
						
						if(contador == 0) printf("%d",(int)palavra.size());
						else printf("-%d",(int)palavra.size());
	
						contador++;

						if((int)palavra.size() > maior){
								maiorP = palavra;
								maior = (int)palavra.size();
						}else if((int)palavra.size() == maior){
									if(palavra < maiorP){
											maiorP = palavra;
											maior = (int)palavra.size();
									}				
						}				

				}

				printf("\n");

		}

		printf("\n");
		printf("The biggest word: %s\n",maiorP.c_str());

		return 0;
}
