#include <iostream>
#include <cmath>

using namespace std;

int main(){
		
		int a,b,c;

		while(scanf("%d %d %d",&a,&b,&c),a | b | c){
					int vol = a * b * c;
					int aresta = cbrt(vol);
					
					printf("%d\n",aresta);	
		}

		return 0;
}
