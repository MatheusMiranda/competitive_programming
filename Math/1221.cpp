#include <iostream>
#include <cmath>

using namespace std;

int main(){

			int n;
			cin >> n;
			int n2;
			int limite;
			while(n--){
					cin >> n2;
					limite = sqrt(n2);
					int flag = 0;
					for(int i = 2; i <= limite;++i){
							if(n2%i == 0){
								flag = 1;
								break;
							}							
					}	

					if(flag == 1) printf("Not prime\n");
					else printf("Prime\n");

			}

			return 0;
}
