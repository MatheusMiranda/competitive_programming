#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(){

	int n;
	cin >> n;
	int stu;
	string nome;
	string pre;
	vector<string> nomes;
	int qt;
	int iterador;

	while(n--){

			cin >> stu;
			int contador = stu;

			while(stu--){		
					cin >> nome;
					nomes.push_back(nome);
			}

			iterador = 0;
			int contaPalavra = -1;

			while(contador--){
					cin >> pre;
					qt = pre.size();
					int contaP = 0;
					for(int i = 0;i < pre.size();++i){
							if(pre[i] == 'P')	contaP++;
							else if(pre[i] == 'A')continue;		
							else qt--;
					}

					float percent = (float)contaP/(float)qt;

					if(percent < 0.75){
							contaPalavra++;
							if(contaPalavra > 0){
								printf(" ");
							}				
							printf("%s",nomes[iterador].c_str());	
					}


					iterador++;
			}				
					printf("\n");
					nomes.clear();
	}	

	return 0;
}
