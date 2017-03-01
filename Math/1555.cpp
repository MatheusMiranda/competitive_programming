#include <iostream>
#include <cmath>

using namespace std;

int main(){
			
	int n;
	cin >> n;
	int x,y;

	while(n--){
			cin >> x >> y;

			int rafael = pow(3*x,2) + pow(y,2);
			int beto = (2 * pow(x,2)) + pow(5*y,2);
			int carlos =  (-100 * x) + pow(y,3);

			if(beto > rafael && beto > carlos) printf("Beto ganhou\n");
			else if(carlos > rafael && carlos > beto) printf("Carlos ganhou\n");
			else printf("Rafael ganhou\n");
				
	}			

	return 0;
}
