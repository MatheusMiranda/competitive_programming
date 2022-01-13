#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){

		string palavra;
		map<string,float> dic;

		int n,m,q;
		cin >> n;
		float preco;
		int quantas;
		float soma;
	
		while(n--){

					soma = 0;
				
					scanf("%d",&m);

					while(m--){
							cin >> palavra >> preco;
							dic[palavra] = preco;
					}				

					scanf("%d",&q);

					while(q--){
							cin >> palavra >> quantas;

							soma += (dic[palavra] * (float)quantas);

					}

					printf("R$ %.2f\n",soma);
					dic.clear();
		}				

		return 0;
}
