#include <iostream>
#include <string>

using namespace std;

int main(){

		int n;
		string linha;
		cin >> n;
		getchar();
		int flag;
		while(n--){
						
				getline(cin,linha);

				flag = 0;
				for(int i = 0;i < linha.size();++i){
							if(linha[i] == ' '){
									flag = 0;
									continue;
							}
							if(linha[i] != ' ' && flag == 0){
										cout << linha[i];	
										flag = 1;
							}				
				}

				cout << endl;				

		}

		return 0;
}
