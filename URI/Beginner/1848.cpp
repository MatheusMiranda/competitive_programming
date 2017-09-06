#include <iostream>
#include <string>

using namespace std;

int main(){
		
		string palavra;
		int soma = 0;

		while(cin >> palavra){
			if(palavra == "caw"){
				cin >> palavra;
				cout << soma << endl;
				soma = 0;
			}else{
				
					if(palavra[0] == '*') soma += 4;
					if(palavra[1] == '*') soma += 2;
					if(palavra[2] == '*') soma += 1;
				
			}
		}

		return 0;
}
