#include <string>
#include <iostream>
#include <map>

using namespace std;

map<char,int> dic;

int main(){
	
		int maior = -1;
		char chave;

		string linha;
		while(getline(cin,linha)){

				for(int i = 0;i < linha.size();++i){
						if(!dic[linha[i]]) dic[linha[i]] = 1;
						else dic[linha[i]]++;


						if(dic[linha[i]] > maior){
								maior = dic[linha[i]];
								chave = linha[i];
						}else if(dic[linha[i]] == maior && (int)linha[i] > (int)chave){
	
								maior = dic[linha[i]];
								chave = linha[i];

						}				

				}


				printf("%c\n",chave);
				dic.clear();
				maior = -1;			
		}

		return 0;
}
