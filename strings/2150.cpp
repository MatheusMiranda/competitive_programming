#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char,int> vogais;

int main(){

		string alfabeto;
		string linha;

		while(cin >> alfabeto){
				getchar();
				getline(cin,linha);
			
				int contador = 0;

				for(int i = 0;i < alfabeto.size();++i){
						vogais[alfabeto[i]] = 1;
				}

				for(int i = 0; i < linha.size();++i){
						if(vogais[linha[i]]) contador++;
				}	

				printf("%d\n",contador);
				vogais.clear();			

		}

		return 0;
}
