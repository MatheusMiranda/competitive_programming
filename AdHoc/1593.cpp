#include <iostream>

using namespace std;

int main(){

		int teste = 0;
		int teste2 = 1;
		int teste3 = 3;

		int contador = 0;
		for(int i = 0;i < 3;++i){
			if(teste & (1 << i)){
					contador++;
			}				
		}

		cout << "no primeiro " << contador << endl;
		contador = 0;

		for(int i = 0;i < 3;++i){
			if(teste2 & (1 << i)){
					contador++;
			}				
		}

		cout << "no segundo " << contador << endl;
		contador = 0;

		for(int i = 0;i < 3;++i){
			if(teste3 & (1 << i)){
					contador++;
			}				
		}

		cout << "no terceiro " << contador << endl;
		return 0;
}
