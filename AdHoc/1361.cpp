#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> azul;
vector<int> vermelho;

boolean func(int a,int b){
			
			return a > b;
}				

int main(){

		int n;
		int n2,numero;
		cin >> n;
		while(n--){
				cin >> n2;

				while(n2--){
						cin >> numero;
						if(numero > 0) azul.push_back(numero);
						else vermelho.push_back(-numero);
				}

				sort(azul.begin(),azul.end(),func);
				sort(vermelho.begin(),vermelho.end(),func)

				int maximo = min(azul.size(),vermelho.size());
				int contador = 0;

				for(int i = 0;i < maximo;++i){
												
			

		

				}

				vermelho.clear();
				azul.clear();
		}

		return 0;
}
