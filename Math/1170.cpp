#include <iostream>

using namespace std;

int main(){

		int n;
		double a;
		cin >> n;
		int contador;

		while(n--){
			cin >> a;
			contador = 0;
			while(1){
				if(a<=1.0)break;
				a/=2;
				contador++;
			}

			cout << contador << " dias"  << endl;

		}


		return 0;
}
