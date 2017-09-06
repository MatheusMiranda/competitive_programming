#include <iostream>
#include <string>

using namespace std;

int main(){
	
		int n;
		cin >> n;
		string palavra;
		double tempo;

		while(n--){
			cin >> palavra;

			tempo = (double)palavra.size() * 0.01;

			printf("%.2lf\n",tempo);

		}
						
		return 0;
}
