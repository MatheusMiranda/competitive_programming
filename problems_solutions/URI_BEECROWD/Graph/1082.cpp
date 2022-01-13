#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;

#define MAX 27

vector<int> vetorzao[MAX];
vector<int> componentes[MAX];

map<char,int> dic;
map<int,char> rev;

int visitados[MAX];

int comps;

void dfs(int no){

		visitados[no] = 1;
		componentes[comps].push_back(no);

		for(auto it : vetorzao[no]){
				if(visitados[it] == -1){
						dfs(it);
				}
		}				
}

int main(){

		dic['a'] = 1;
		dic['b'] = 2;
		dic['c'] = 3;
		dic['d'] = 4;
		dic['e'] = 5;
		dic['f'] = 6;
		dic['g'] = 7;
		dic['h'] = 8;
		dic['i'] = 9;
		dic['j'] = 10;
		dic['k'] = 11;
		dic['l'] = 12;
		dic['m'] = 13;
		dic['n'] = 14;
		dic['o'] = 15;
		dic['p'] = 16;
		dic['q'] = 17;
		dic['r'] = 18;
		dic['s'] = 19;
		dic['t'] = 20;
		dic['u'] = 21;
		dic['v'] = 22;
		dic['w'] = 23;
		dic['x'] = 24;
		dic['y'] = 25;
		dic['z'] = 26;

		rev[1] = 'a';
		rev[2] = 'b';
		rev[3] = 'c';
		rev[4] = 'd';
		rev[5] = 'e';
		rev[6] = 'f';
		rev[7] = 'g';
		rev[8] = 'h';
		rev[9] = 'i';
		rev[10] = 'j';
		rev[11] = 'k';
		rev[12] = 'l';
		rev[13] = 'm';
		rev[14] = 'n';
		rev[15] = 'o';
		rev[16] = 'p';
		rev[17] = 'q';
		rev[18] = 'r';
		rev[19] = 's';
		rev[20] = 't';
		rev[21] = 'u';
		rev[22] = 'v';
		rev[23] = 'w';
		rev[24] = 'x';
		rev[25] = 'y';
		rev[26] = 'z';
	
		int n;
		cin >> n;
		int nodes,vertex;
		char ori,dest;
		int caso = 0;

		while(n--){
				comps = 0;
				memset(visitados,-1,sizeof visitados);
				cin >> nodes >> vertex;
					
				while(vertex--){
						cin >> ori >> dest;

						vetorzao[dic[ori]].push_back(dic[dest]);
						vetorzao[dic[dest]].push_back(dic[ori]);						
				}
				
				for(int i = 1;i <= nodes;++i){
						if(visitados[i] == -1){
									comps++;
									dfs(i);
						}
				}

				printf("Case #%d:\n",++caso);	
				for(int i = 1;i <= comps;++i){
						sort(componentes[i].begin(),componentes[i].end());		
						for(auto iterador : componentes[i]){
								printf("%c,",rev[iterador]);
						}				
						printf("\n");
				}

				printf("%d connected components\n\n",comps);	

				for(int i = 0;i <= comps;++i){
						componentes[i].clear();
				}

				for(int i = 0;i<= nodes;++i){
						vetorzao[i].clear();				
				}
		}

		return 0;
}
