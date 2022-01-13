#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <queue>

using namespace std;
using ii = pair<int,int>;

#define MAX 110

string matrizona[MAX];
int visitados[MAX][MAX];

queue<ii> fila;

ii us[] {ii(0,1),ii(1,0),ii(0,-1),ii(-1,0)};

int main(){

		int n,m;

		cin >> m >> n;

		string linha;

		for(int i = 0;i < n;++i){

								cin >> matrizona[i];

		}	
	
		int flag;

		memset(visitados,-1,sizeof visitados);
		fila.push(ii(0,0));

		int chegou = 0;

		while(!fila.empty()){

				int x = fila.front().first;
				int y = fila.front().second;
				fila.pop();

				visitados[x][y] = 1;

				if(matrizona[x][y] == '*'){
					chegou = 1;
					break;
				}	

				if(matrizona[x][y] == '>'){
					flag = 0;
					if(visitados[x + us[flag].first][y + us[flag].second] == -1){
								fila.push(ii(x + us[flag].first,y + us[flag].second));
					}					
				}else if(matrizona[x][y] == 'v'){				
					flag = 1;
					if(visitados[x + us[flag].first][y + us[flag].second] == -1){
								fila.push(ii(x + us[flag].first,y + us[flag].second));
					}					
				}else if(matrizona[x][y] == '<'){
					flag = 2;
					if(visitados[x + us[flag].first][y + us[flag].second] == -1){
								fila.push(ii(x + us[flag].first,y + us[flag].second));
					}					
				}else if(matrizona[x][y] == '^'){				
					flag = 3;
					if(visitados[x + us[flag].first][y + us[flag].second] == -1){
								fila.push(ii(x + us[flag].first,y + us[flag].second));
					}					
				}else if(matrizona[x][y] == '.'){	
						
					if(visitados[x + us[flag].first][y + us[flag].second] == -1){
								fila.push(ii(x + us[flag].first,y + us[flag].second));
					}	
				}				
		}

		if(chegou == 1) printf("*\n");
		else printf("!\n");

		return 0;
}
