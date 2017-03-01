#include <iostream>
#include <string>

using namespace std;

int main(){

		string palavra;
			
		cin >> palavra;

		int tam = palavra.size();

		for(int i = tam - 1;i >= 0;--i){

			printf("%c",palavra[i]);

		}

		printf("\n");

		return 0;
}
