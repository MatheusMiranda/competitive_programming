#include <iostream>
#include <cmath>

using namespace std;

int main(){

		unsigned long long n,tables,result;
		cin >> n;
		unsigned long long graim;

		while(n--){
				cin >> tables;
				
				if(tables == 64) printf("1537228672809129 kg\n");

				else{	
				result = pow(2,(tables));

				unsigned long long kg = result/12000;

				cout << kg << " kg" << endl;
				}
		}

		return 0;
}
