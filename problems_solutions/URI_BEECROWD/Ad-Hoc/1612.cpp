#include <iostream>

using namespace std;

int main(){

		int n;
		cin >> n;
		int num;

		while(n--){
			cin >> num;
			
			if(num == 1) printf("1\n");
			else if(num%2 == 0) printf("%d\n",num/2);
			else printf("%d\n",(num/2) + 1);

		}				


		return 0;
}
