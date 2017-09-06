#include <iostream>
#include <string>

using namespace std;

int main(){

		double soma = 0;
		double dist;
		string linha;
		int contador = 0;

		while(getline(cin,linha)){
			cin >> dist;
			soma += dist;
			contador++;
			getchar();
		}

		printf("%.1lf\n",soma/(double)contador);		

		return 0;
}
