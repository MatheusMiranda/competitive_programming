#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){

			string linha;
			char letra;

			int flag = 0;
		
			while(getline(cin,linha)){
								
						for(int i = 0;i < linha.size();++i){
								if(linha[i] != ' '){
										if(flag == 0){
												letra =  toupper(linha[i]);
												cout << letra;
												flag = 1;
										}else{
												letra =  tolower(linha[i]);
												cout << letra;
												flag = 0;
										}				

								}else{
									cout << linha[i];
								}				
						}

						cout << endl;
						flag = 0;
			}		

		return 0;
}
