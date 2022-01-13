#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char,int> dic;

int main(){

		int n;
		cin >> n;
		getchar();
		string linha;
		int contador;
		while(n--){

			getline(cin,linha);
			contador = 0;
			dic[' '] = 1;
			dic[','] = 1;

			for(int i = 0;i < linha.size();++i){
					if(!dic[linha[i]]){
						dic[linha[i]] = 1;
						contador++;
					}						
			}

			if(contador == 26) printf("frase completa\n");
			else if(contador <26 && contador >= 13) printf("frase quase completa\n");
			else printf("frase mal elaborada\n");		
						
			dic.clear();
		}


		return 0;
}
