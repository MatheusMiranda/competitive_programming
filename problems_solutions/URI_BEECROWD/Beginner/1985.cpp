#include <iostream>

using namespace std;

int main(){

		int n;
		cin >> n;
		double soma = 0;
		int produto,quantidade;

		while(n--){
				cin >> produto >> quantidade;

				if(produto == 1001) soma += (double)quantidade * 1.50;
				if(produto == 1002)	soma += (double)quantidade * 2.50;
				if(produto == 1003) soma += (double)quantidade * 3.50;
				if(produto == 1004) soma += (double)quantidade * 4.50;
				if(produto == 1005) soma += (double)quantidade * 5.50;
			
		}

		printf("%.2f\n",soma);

		return 0;
}
