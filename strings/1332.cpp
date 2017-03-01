#include <iostream>
#include <string>
#include <vector>

using namespace std;
using ii = pair<int,int>;

vector<string> palavras;

int main(){

		string palavra,davez;
		int n;

		scanf("%d",&n);

		palavras.push_back("one");
		palavras.push_back("two");
		palavras.push_back("three");

		ii resp;

		while(n--){
				
				cin >> palavra;

				resp.first = 0;resp.second = 0;

				int contador = 0;				
				for(int i = 0;i < 3;++i){
							davez = palavras[i];

							int t1 = davez.size();
							int t2 = palavra.size();

							int menor = min(t1,t2);
						
							for(int j = 0;j < menor;++j){
									if(davez[j] == palavra[j]) contador++;					
							}


							if(contador > resp.first){
									resp.first = contador;
									resp.second = i + 1;
							}				

							contador = 0;
				}			

				cout << resp.second << endl;	

		}


		return 0;
}
