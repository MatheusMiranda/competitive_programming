#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int main()
{
	string mina;
	stack<char> pilhaDiamantes;
	int qtdCasos,qtdDiamantes = 0;
	
	cin >> qtdCasos;

	for (int i = 0; i < qtdCasos; ++i){

	cin >> mina;

		for (int i = 0; i < mina.length(); ++i){
		 	
		 	if(mina[i] == '<'){

		 		pilhaDiamantes.push(mina[i]);
		 	
		 	}
		 	else if(mina[i] == '>'){
		 	
		 		if(pilhaDiamantes.empty()){

		 			pilhaDiamantes.push(mina[i]);

		 		}
		 		else{

		 			if(pilhaDiamantes.top() == '<'){

						pilhaDiamantes.pop();
						qtdDiamantes++;		 				

		 			}

		 		}
		 	
		 	}
		}

		cout << qtdDiamantes << "\n";
		qtdDiamantes = 0;

		while(!pilhaDiamantes.empty()){

			pilhaDiamantes.pop();

		}

	} 

	return 0;
}
