#include <string>
#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;
	string a,b;

	while(n--){
			cin >> a >> b;
			int contador = 0;

			for(int i = 0;i < a.size();++i){
					
					while(a[i] != b[i]){	
							int numero = (int)a[i];
							
							numero++;
							contador++;
							if(numero == 122) numero = 97;

							char letra = (char)numero;
							cout << letra << endl;
							a[i] = letra;
					}				
			}	

			printf("%d\n",contador);			
						
	}
	
	return 0;
}
