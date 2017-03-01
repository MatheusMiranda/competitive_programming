#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> vetor;

int main(){

		int contador;
		string moves;

		int n;
		cin >> n;
		int tiros,num;

		while(n--){
			cin >> tiros;
			int qt = tiros;
			contador = 0;

			while(tiros--){
				cin >> num;
				vetor.push_back(num);
			}

			cin >> moves;

			for(int i = 0;i < qt;++i){
					int a = vetor[i];		
					char letra = moves[i];

					if((letra == 'S' && a <= 2) || (letra == 'J' && a > 2)) contador++;

			}	

			printf("%d\n",contador);			
			vetor.clear();

		}

		return 0;
}
