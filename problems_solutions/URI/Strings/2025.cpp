#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main(){
		
		int n;
		cin >> n;
		string linha;
		int contador;
		string palavra;
		getchar();
		while(n--){
				getline(cin,linha);
				stringstream ss(linha);
				contador = 0;

				while(ss >> palavra){
						if (palavra.find("oulupukk") != string::npos) {
											   if(contador == 0)printf("Joulupukki");
												 else printf(" Joulupukki");
												if(palavra[palavra.size() - 1] == '.') printf(".");
												 
						}else{
											   if(contador == 0)printf("%s",palavra.c_str());
												 else printf(" %s",palavra.c_str());
													
						}

						contador++;
				}
				printf("\n");
		}

		return 0;
}
