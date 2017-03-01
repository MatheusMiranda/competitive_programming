#include <iostream>

using namespace std;

int main(){

		long long a,b;

		while(scanf("%lld %lld",&a,&b),a | b){
				printf("%lld\n",2*a-b);
		}

		return 0;
}
