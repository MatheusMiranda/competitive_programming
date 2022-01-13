#include <iostream>

using namespace std;

int main(){

		int n,k,num;
		cin >> n;

		while(n--){
				cin >> k;
				while(k--){
						cin >> num;

						if(num == 1) printf("Rolien\n");
						else if(num == 2) printf("Naej\n");
						else if(num == 3) printf("Elehcim\n");
						else printf("Odranoel\n");
				}
		}

		return 0;
}

