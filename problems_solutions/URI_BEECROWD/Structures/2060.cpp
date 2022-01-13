#include <iostream>

using namespace std;

int main(){

		int n,numero;

		scanf("%d",&n);

		int m2 = 0,m3 = 0,m4 = 0,m5 = 0;

		for(int i = 0;i<n;++i){
						scanf("%d",&numero);

						if(numero%2 == 0)m2++;
						if(numero%3 == 0)m3++;
						if(numero%4 == 0)m4++;
						if(numero%5 == 0)m5++;
			
		}

		printf("%d Multiplo(s) de 2\n",m2);
		printf("%d Multiplo(s) de 3\n",m3);
		printf("%d Multiplo(s) de 4\n",m4);
		printf("%d Multiplo(s) de 5\n",m5);


		return 0;
}
