#include <iostream>

using namespace std;

int main(){

			long long n1,n2;

			while(scanf("%lld %lld",&n1,&n2) != EOF){
					
					long long maior = max(n1,n2);
					long long menor = min(n1,n2);

					cout << maior - menor << endl;
			

			}				

			return 0;
}
