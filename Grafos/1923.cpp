#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <string>

using namespace std;

#define MAX 600

vector<int> vetorzao[MAX];

map<string,int> dic;
map<int,string> rev;

int contaTudo = 0;

map<string,int> resposta;

void dfs(int no,int cont){
		
		if(cont < 0) return;
	
		for(int i = 0;i < vetorzao[no].size();++i){
						int amigo = vetorzao[no][i];
						dfs(amigo,cont - 1);
		}

		if(no != dic["Rerisson"]) {	
				if(!resposta[rev[no]]){
						contaTudo++;
						resposta[rev[no]] = 1;
				}				
		}		

}				

int main(){

		int n1,n2;
		scanf("%d %d",&n1,&n2);
		string nome1,nome2;
		int contador = 1;

		for(int i =0;i < n1;++i){
				cin >> nome1 >> nome2;
					
				if(!dic[nome1]){
						dic[nome1] = contador;
						rev[contador] = nome1;
						contador++;
				}
				if(!dic[nome2]){	
						dic[nome2] = contador;
						rev[contador] = nome2;
						contador++;
				}
		
				vetorzao[dic[nome1]].push_back(dic[nome2]);
				vetorzao[dic[nome2]].push_back(dic[nome1]);
								
		}

		dfs(dic["Rerisson"],n2);

		printf("%d\n",contaTudo);
		for(auto it : resposta){
				printf("%s\n",it.first.c_str());
		}				

		return 0;
}
