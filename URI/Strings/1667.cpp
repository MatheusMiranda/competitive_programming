#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main(){
		
		string linha;
		string palavra;
		int contador = 0;

		while(getline(cin,linha)){
				stringstream ss(linha);
				while(ss >> palavra){
						
								if(palavra == "<br>"){
												printf("\n");
												contador = 0;
								}
								else if(palavra == "<hr>"){
												if(contador == 0) printf("--------------------------------------------------------------------------------\n");
												else{
																contador = 0; 
																printf("\n--------------------------------------------------------------------------------\n");
												}
								}else{				

												contador += (palavra.size() + 1);
												if(contador > 80){
																printf("\n");
																contador = (palavra.size() + 1);
																printf("%s",palavra.c_str());
												}else if(contador == 80){
																printf(" %s",palavra.c_str());
																printf("\n");
																contador = 0;
												}else{
																if(contador != (palavra.size() + 1)) printf(" %s",palavra.c_str());
																else printf("%s",palavra.c_str());
												}

								}
				}
		}				
				printf("\n");

		return 0;
}
