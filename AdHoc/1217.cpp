#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){

		int n;
		cin >> n;
		string linha;
		double preco;
		double total = 0;
		string palavra;
		int contador;
		int kgtotal = 0;

		for(int i = 1;i<=n;++i){
				contador = 0;
				cin >> preco;
				total+= preco;
				getchar();

				getline(cin,linha);
				stringstream ss(linha);
				while(ss >> palavra){	
						contador++;
				}

				kgtotal+=contador;
				printf("day %d: %d kg\n",i,contador);
				
		}

		printf("%.2lf kg by day\n",kgtotal/(double)n);
		printf("R$ %.2lf by day\n",total/(double)n);

		return 0;
}
