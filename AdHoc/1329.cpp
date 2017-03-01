#include <iostream>

using namespace std;

int main(){

		int n;
		int mary,jon;
		int numero;
		while(scanf("%d",&n),n){
					mary = 0;
					jon = 0;
				for(int i = 0;i < n;++i){
					cin >> numero;

					if(numero == 0) mary++;
					else jon++;
					
				}
				printf("Mary won %d times and John won %d times\n",mary,jon);
		}
	
		return 0;
}
