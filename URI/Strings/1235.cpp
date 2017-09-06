#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

		string palavra;
		int n;

		scanf("%d",&n);

				getchar();
		for(int i = 0;i < n;++i){
				getline(cin,palavra);
				int tam = palavra.size();
				int meiuca = tam/2;

				for(int j = meiuca - 1; j >= 0;--j){
						cout << palavra[j];			
				}		
				for(int j = tam - 1; j >= meiuca;--j){
						cout << palavra[j];		
				}	
				cout << endl;
		}

		return 0;
}
