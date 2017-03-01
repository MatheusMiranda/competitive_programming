#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cmath>

using namespace std;

#define MAX 1000 
#define PI4 0.7071067811865476

map<char,int> dic;
map<string,int> vet;

string linha;

using ii = pair<double,double>;

ii us[] {ii(0,1),ii(PI4,PI4),ii(1,0),ii(PI4,-PI4),ii(0,-1),ii(-PI4,-PI4),ii(-1,0),ii(-PI4,PI4)};

//vector<string> vet {"N","NE","E","SE","S","SW","W","NW"};

vector<string> comandos;

int caso = 0;

void resolve(){

	dic['1'] = 1;
	dic['2'] = 1;
	dic['3'] = 1;
	dic['4'] = 1;
	dic['5'] = 1;
	dic['6'] = 1;
	dic['7'] = 1;
	dic['8'] = 1;
	dic['9'] = 1;
	dic['0'] = 1;

	vet["N"] = 0;
	vet["NE"] = 1;
	vet["E"] = 2;
	vet["SE"] = 3;
	vet["S"] = 4;
	vet["SW"] = 5;
	vet["W"] = 6;
	vet["NW"] = 7;

		ii ponto(0.0,0.0);
		int tam = comandos.size();
		string move;
		string vezes;
		int qt;

		for(int i = 0; i < tam;++i){
				
				int tam2 = comandos[i].size();
				move = "";
				vezes = "";

				for(int j = 0;j < tam2;++j){
						if(dic[comandos[i][j]]) vezes+= comandos[i][j];
						else move+=comandos[i][j];
				}

				qt = atoi(vezes.c_str());

			ponto.first = ponto.first + (qt * us[vet[move]].first);
			ponto.second = ponto.second + (qt * us[vet[move]].second);

				
		}

		printf("Map #%d\n",++caso);
		printf("The treasure is located at (%.3lf,%.3lf).\n",ponto.first,ponto.second);
		printf("The distance to the treasure is %.3lf.\n",sqrt((ponto.first * ponto.first) + (ponto.second * ponto.second)));
		printf("\n");

}	

int main(){
	
		ii ponto(0.0,0.0);
		string dir = "";
		int n;

		while(cin >> linha){
			if(linha == "END")break;
		
			int tam = linha.size();
			for(int i =0;i < tam;++i){
						if(linha[i] == ','){
							comandos.push_back(dir);
							dir = "";
							continue;
						}
						else if(linha[i] == '.'){
							comandos.push_back(dir);
							dir = "";
							resolve();	
							comandos.clear();
							continue;
						}	
						dir+=linha[i];
			}

		}	


		return 0;
}
