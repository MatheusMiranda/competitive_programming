#include <string>
#include <iostream>
#include <map>
#include <cstdlib>

using namespace std;

map<char,int> dic;
map<int,char> rev;

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
																																																							
				string linha;
				
				int flag = 0;
				char letra;
				int valor = dic[letra];

				while(getline(cin,linha)){

						for(int i = 0;i < linha.size();++i){
							if(isalpha(linha[i])){
								if(isupper(linha[i])){
										flag = 1;
										letra = tolower(linha[i]);
										valor = dic[letra];
								}else{
										valor = dic[linha[i]];
								}				
									

								valor+=13;


								if(valor > 26) valor-= 26;


								letra = rev[valor];

								if(flag == 1){
										letra = toupper(letra);	
								}				
								
								cout << letra;

								flag = 0;
							}else{
								cout << linha[i];
							}				
						}

						printf("\n");		
				}


				return 0;
}
