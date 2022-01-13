#include <string>
#include <iostream>

using namespace std;

int main(){
			int n;
			cin >> n;

			long long n1,n2;
			string espelho;
			string palavra;

			while(n--){

					cin >> n1 >> n2;

					for(int i = n1;i <= n2;++i){
							palavra += to_string(i);
							espelho += to_string(i);
					}
					
					for(int i = palavra.size() - 1;i >= 0;--i){
							espelho += palavra[i];
					}				

					cout << espelho << endl;		
					espelho.clear();
					palavra.clear();	
			}

			return 0;
}
