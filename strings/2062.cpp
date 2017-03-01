#include <string>
#include <iostream>

using namespace std;

int main(){

		string palavra;
		int n;
		cin >> n;

		int contador = 0;

		while(n--){
				
				cin >> palavra;
				if(palavra[0] == 'O' && palavra[1] == 'B' && (int)palavra.size() == 3){
							 
								if(contador == 0)printf("OBI");
								else printf(" OBI");

				}				
				else if(palavra[0] == 'U' && palavra[1] == 'R' && (int)palavra.size() == 3){
							 	if(contador == 0) printf("URI");
								else printf(" URI");
				}else{
							 	if(contador == 0) printf("%s",palavra.c_str());
								else printf(" %s",palavra.c_str());
				}				

				contador++;
		}				

		printf("\n");

		return 0;
}

