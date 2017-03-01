#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

map<char,string> dic;
vector<string> vetor;

int main(){

		string linha;
		string palavra;

		while(1){
				getline(cin,linha);
				if(linha == ".")break;
			

				dic['a'] = "";
				dic['b'] = "";
				dic['c'] = "";
				dic['d'] = "";
				dic['e'] = "";
				dic['f'] = "";
				dic['g'] = "";
				dic['h'] = "";
				dic['i'] = "";
				dic['j'] = "";
				dic['k'] = "";
				dic['l'] = "";
				dic['m'] = "";
				dic['n'] = "";
				dic['o'] = "";
				dic['p'] = "";
				dic['q'] = "";
				dic['r'] = "";
				dic['s'] = "";
				dic['t'] = "";
				dic['u'] = "";
				dic['v'] = "";
				dic['w'] = "";
				dic['x'] = "";
				dic['y'] = "";
				dic['z'] = ""; 
		

				int contador = 0;
				int v = 0;	

				stringstream ss(linha);
				while(ss >> palavra){
						vetor.push_back(palavra);
				}

				for(int i = 0;i < vetor.size();++i){
					palavra = vetor[i];
					if(palavra.size() > 2){
							if(dic[palavra[0]] == ""){
										 	dic[palavra[0]] = palavra;
											if(v > 0)printf(" %c.",palavra[0]);
											else printf("%c.",palavra[0]);
											contador++;				
							}else{
									if(v > 0) printf(" %s",palavra.c_str());
									else printf("%s",palavra.c_str());
							}					
					}else{
							if(v > 0) printf(" %s",palavra.c_str());
							else printf("%s",palavra.c_str());
					}
					
					v++;				
				}	
				
				printf("\n");
				printf("%d\n",contador);

				for(auto a : dic){
						if(a.second != "")printf("%c. = %s\n",a.first,a.second.c_str());
				}

				dic.clear();
				vetor.clear();				
		}

		return 0;
}
