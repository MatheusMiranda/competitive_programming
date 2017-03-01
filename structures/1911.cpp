#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string,string> dic;

int main(){

		string nome,ass;		

		int n;
		while(1){
				cin >> n;
				if(n == 0) break;

				while(n--){
						cin >> nome >> ass;

						dic[nome] = ass;
				}				

				int n2;
				cin >> n2;
				int contador =0;
				int contador2;

				while(n2--){
					cin >> nome >> ass;
					contador2 = 0;
					
							if(dic[nome] != ass){
									for(int i = 0;i < ass.size();++i){
											if(dic[nome][i] != ass[i]) contador2++;
											if(contador2 == 2) break;
									}				
									
							}	

					if(contador2 >= 2)contador++;		

				}	
				
				printf("%d\n",contador);			
				dic.clear();
		}				

		return 0;
}
