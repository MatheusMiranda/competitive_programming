#include <iostream>
#include <vector>

using namespace std;

int main(){

		vector<int> notas;

		int n;
		cin >> n;
		int sts;
		int nota;
		float media;
		int soma;

		while(n--){
				cin >> sts;
				int alunos = sts;
				soma = 0;

				while(sts--){	
					cin >> nota;
					notas.push_back(nota);
					soma+=nota;
				}
					
				media = (float)soma/(float)alunos;

				int contador = 0;

				for(int i = 0;i < alunos;++i){
						if(notas[i] > media){
							contador++;
						}					
				}

				float percent = (100.0 * contador) / alunos;				
		
				printf("%.3f%%\n",percent);
					
				notas.clear();
		}

		return 0;
}
