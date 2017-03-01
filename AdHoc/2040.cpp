#include <string>
#include <map>
#include <iostream>

using namespace std;

map<string,int> placar;

int main(){
	
		string nome,nome2;
		int n;
		int pontos,pontos2;
		char traco;

		while(scanf("%d",&n),n){
				for(int i = 0;i < n;++i){
						cin >> nome >> pontos;
						placar[nome] = pontos;
				}

				for(int i =0;i < n/2;++i){
						cin >> nome >> pontos >> traco >> pontos2 >> nome2;
		
						placar[nome] += (3*pontos);
						placar[nome2]	+= (3*pontos2);

						if(pontos > pontos2) placar[nome] += 5;
						else if(pontos2 > pontos) placar[nome2] += 5;
						else{
								placar[nome] += 1;
								placar[nome2] += 1;
						}				
				}

				int maior = -1;
				string chave;
					
				for(auto par : placar){
						if(par.second > maior){
								maior = par.second;
								chave = par.first;
						}				
				}

				if(chave == "Sport"){
						printf("O Sport foi o campeao com %d pontos :D\n",placar["Sport"]);
				}else{
						printf("O Sport nao foi o campeao. O time campeao foi o %s com %d pontos :(\n",chave.c_str(),placar[chave]);
				}	

				printf("\n");		
				placar.clear();


		}	

		return 0;
}
