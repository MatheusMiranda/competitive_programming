#include <string>
#include <iostream>

using namespace std;

int main(){
		
		int caso = 0;

		string assin;
		string linha;

		while(1){
				cin >> assin;
				if(assin == "0") break;

				cin >> linha;

				if(caso > 0)printf("\n");		
				printf("Instancia %d\n",++caso);
				if (linha.find(assin) != string::npos) {
	    				printf("verdadeira\n");
				}else{
						printf("falsa\n");
				}		
		}

		return 0;
}


