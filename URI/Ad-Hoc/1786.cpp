#include <iostream>
#include <string>

using namespace std;

int main(){

		string palavra;

		while(cin >> palavra){
			int soma = 0;
			int b1,b2;
			for(int i = 0;i < 9;++i){
					int x = (int)palavra[i] - 48;

					soma += x* (i+1);
			}

			b1 = soma%11;
			if(b1 == 10) b1 = 0;
			
			soma = 0;
			int cont = 9;
			for(int i = 0;i < 9;++i){
					int x = (int)palavra[i] - 48;

					soma += x* cont;
					cont--;
			}

			b2 = soma%11;	
			if(b2 == 10) b2 = 0;

			cout << palavra[0] << palavra[1] << palavra[2];
			cout << '.'	<< palavra[3] << palavra[4]	<< palavra[5];
			cout << '.' << palavra[6] << palavra[7] << palavra[8];
			cout << '-' << b1 << b2 << endl;

		}

		return 0;
}
