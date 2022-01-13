#include <iostream>

using namespace std;

long long fib[45];

int contador;

int acha_fib(int n){

		contador++;

		if( n == 1) return 1;
		else if(n == 0) return 0;

		return fib[n] = acha_fib(n-1) + acha_fib(n-2);

}				

int main(){

		fib[0] = 1;
		fib[1] = 1;

		int n,num;
		cin >> n;
		while(n--){
			cin >> num;
			contador = 0;

			long long valor = acha_fib(num);

			printf("fib(%d) = %d calls = %lld\n",num,contador - 1,valor);
			
		}

		return 0;
}
