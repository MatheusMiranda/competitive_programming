#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<string> sim;
vector<string> nao;

map<string,int> dic;

bool func(string p1,string p2){
		return p1 < p2;
}				

int main(){

		string nome,op;
		int maior = -1;
		string grande;

		while(1){
						cin >> nome >> op;
						if(nome == "FIM") break;

						if(!dic[nome]){

										dic[nome] = 1;
										if(op == "YES"){ 
														sim.push_back(nome);
														if((int)nome.size() > maior){
																		maior = (int)nome.size();
																		grande = nome;
														}				
										}				
										else nao.push_back(nome);
						}

		}
			sort(sim.begin(),sim.end(),func);
			sort(nao.begin(),nao.end(),func);

			for(int i = 0;i < sim.size();++i) printf("%s\n",sim[i].c_str());	
			for(int i = 0;i < nao.size();++i) printf("%s\n",nao[i].c_str());	
				
			printf("\nAmigo do Habay:\n%s\n",grande.c_str());			

		return 0;
}
