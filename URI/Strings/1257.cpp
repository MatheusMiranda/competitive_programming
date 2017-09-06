#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string,int> dic;

int main(){

		int n;
		int l;
		string palavra;
		int soma = 0;
		
		cin >> n;
			
		for(int i = 0;i < n;++i){

				cin >> l;

				for(int j = 0;j < l;++j){
					cin >> palavra;
						
					for(int k = 0;k < palavra.size();++k){
						soma += (palavra[k] - 65) + j + k;											
					}
		
				}					
			
				cout << soma << endl;
				soma = 0;	

		}

			return 0;
}
