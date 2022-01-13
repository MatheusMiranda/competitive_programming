#include <iostream>

using namespace std;

long long int fat[25];

void fato(){
	
		fat[0] = 1;
		fat[1] = 1;

		for(int i = 2;i <= 20;++i){
				fat[i] = i * fat[i-1];
		}		
}

int main(){
			
		long long int n,m;

		while(cin >> n >> m){
			
				fato();
				long long int a = fat[n];
				long long int b = fat[m];	
				cout << (a + b) << endl;
	
		}

		return 0;
}
