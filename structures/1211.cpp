#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main(){

	vector<int> base,vetor;			
	int n;
	string linha;

	while(cin >> n){
			
			getchar();
			getline(cin,linha);
	
			int t = linha.size();
			for(int k = 0;k < t;++k){
					base.push_back((int)linha[k] - 48);
			}

			int it = n - 1;

			int contador = 0;

			while(it--){
					getline(cin,linha);
					
					for(int k = 0;k < t;++k){
							vetor.push_back((int)linha[k] - 48);
					}						

					int tamanho = vetor.size();
					for(int i = 0;i < tamanho;i++){
							
							if(vetor[i] == base[i]){
									contador++;
							}
							else break;
					}
					
					base = vetor;			
					vetor.clear();
			}

			cout << contador << endl;
			vetor.clear();
			base.clear();
	}	

	return 0;
}
