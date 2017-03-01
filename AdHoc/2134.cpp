#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using ii = pair<int,string>;

vector<ii> vetor;

bool func(ii par1,ii par2){
		
		if(par1.first == par2.first){
				int contador = 0;
				
				while(par1.second[contador] == par2.second[contador]){
						contador++;
				}				
				
				return (int)par1.second[contador] > (int)par2.second[contador];
		}

		return par1.first < par2.first;		

}				

int main(){

		int n;
		int caso = 0;

		while(cin >> n){
						string nome;
						int nota;
						while(n--){
										cin >> nome >> nota;
										vetor.push_back(ii(nota,nome));			
						}

						sort(vetor.begin(),vetor.end(),func);

						printf("Instancia %d\n",++caso);
						printf("%s\n\n",vetor[0].second.c_str());

						vetor.clear();
		}

		return 0;

}
