#include <iostream>
#include <string>
#include <stack>

using namespace std;

stack<char> pilha;

int main(){

		string palavra;
		int proc;
		int contador;

		while(cin >> palavra){
				cin >> proc;
				
				contador = 0;
				int ops = 0;
				char ant = 't';	
				char atual;
				int flag = 0;

				for(int i = 0;i < palavra.size();++i){
						atual = palavra[i];
						if(atual == 'W'){
										ops++;
										contador = 0;
						}else{
										if(atual != ant){
														ops++;
														contador = 1;
										}else if(atual == ant){
														contador++;
														if(contador == proc){
																		flag = 1;
																		ops++;
																		contador = 0;
														}				
										}				
						}
						if(flag == 0){			
							ant = atual;
						}else{
							ant = 't';
							flag = 0;
						}				
				}

				cout << ops << endl;
		}				

		return 0;
}
