#include <iostream>
#include <string>
#include <map>
#include <cstring>

int matrizona [3][3];

using namespace std;

map<string,int> dic;


int main(){

				dic["pedra"] = 1;
				dic["ataque"] = 2;
				dic["papel"] = 3;

				memset(matrizona,0,sizeof matrizona);

				matrizona[2][1] = 1;
				matrizona[1][3] = 1;
				matrizona[2][3] = 1;
				matrizona[1][2] = 2;
				matrizona[3][1] = 2;
				matrizona[3][2] = 2;

				matrizona[1][1] = 10;
				matrizona[3][3] = 5;
				matrizona[2][2] = -1;

				int n;
				cin >> n;
				string p1,p2;

				while(n--){

						cin >> p1 >> p2;
						
						if(matrizona[dic[p1]][dic[p2]] == 1) printf("Jogador 1 venceu\n");
						else if(matrizona[dic[p1]][dic[p2]] == 2)printf("Jogador 2 venceu\n");
						else if(matrizona[dic[p1]][dic[p2]] == -1) printf("Aniquilacao mutua\n");
						else if(matrizona[dic[p1]][dic[p2]] == 10) printf("Sem ganhador\n");
						else printf("Ambos venceram\n");

				}
				return 0;
}
