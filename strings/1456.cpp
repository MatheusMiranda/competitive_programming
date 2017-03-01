#include <iostream>
#include <string>

using namespace std;

int main(){
		
		string palavra,comandos;
		int n;

		cin >> n;

		for(int i = 0;i < n;++i){
			
			getchar();				
			getline(cin,palavra);
			getline(cin,palavra);
			getline(cin,comandos);

			int pont = 0,atual;
			char letra;
			char novaletra;

			for(auto k : comandos){

							if(k == '>') pont++;		
							else if(k == '<')	pont--;
							else if(k == '+'){
									letra = palavra[pont];
									atual = (int)letra;
									atual++;
									novaletra = (char)atual;	
									palavra[pont] = novaletra;			
							}
							else if(k == '-'){
									letra = palavra[pont];
									atual = (int)letra;
									atual--;
									novaletra = (char)atual;	
									palavra[pont] = novaletra;			
							}				
							else if(k == '.'){
									printf("%c",palavra[pont]);
											
							}				
							else if(k == ','){
											
							}				
							else if(k == '['){
							}				
							else if(k == ']'){
							}				
							else if(k == '#'){		
							}
			}				

		}				
		

		return 0;
}
