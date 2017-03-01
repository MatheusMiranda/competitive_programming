#include <iostream>

using namespace std;

#define PI 3.14

int main(){

		double n,n2;
		double area;
		double altura,raio;
		while(cin >> n){
				cin >> n2;
				raio = n2/2.0;
				
				area = PI * (raio * raio);
							
				altura = n/area;
			
				printf("Altura = %.2lf\n",altura);
				printf("Area = %.2lf\n",area);

		}

		return 0;
}
