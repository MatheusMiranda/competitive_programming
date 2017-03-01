#include <iostream>
#include <map>

using namespace std;

map<int,int> dic;

int main(){
		
		int n,n2;
		int num;
		int contador;
		cin >> n;
		while(n--){
				contador = 0;
				cin >> n2;
				while(n2--){
						cin >> num;
						if(!dic[num]){
								dic[num] = 1;
								contador++;
						}	
				}		
				
				printf("%d\n",contador);
				dic.clear();
		}

		return 0;
}
