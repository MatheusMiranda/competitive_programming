#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){

		map<string,int> dic;
		int n;
		cin >> n;
		string palavra;
		int n2;
		int contador;

		while(n--){
				cin >> n2;
				contador = 0;
				
				while(n2--){
						cin >> palavra;
						
						if(!dic[palavra]){
									 	contador++;
										dic[palavra] = 1;
						}				

				}

				if(contador == 1) cout << palavra << endl;
				else cout << "ingles" << endl;
				dic.clear();
		}
	
		return 0;
}
