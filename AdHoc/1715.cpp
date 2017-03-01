#include <iostream>

using namespace std;

int main(){

		int jog,part;

		cin >> jog >> part;
		int contador = 0;
		int num;

		for(int i = 0;i < jog;++i){
			int flag = 1;

			for(int j = 0;j < part;++j){
					cin >> num;
					if(num == 0){
						flag = 0;
					}				
			}

			if(flag == 1) contador++;
		}

		printf("%d\n",contador);

		return 0;
}
