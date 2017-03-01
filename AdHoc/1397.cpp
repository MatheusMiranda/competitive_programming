#include <iostream>

using namespace std;

int main(){

		int n;
		while(scanf("%d",&n),n){
				int n1,n2;	
				int p1 = 0,p2 = 0;
				while(n--){
						cin >> n1 >> n2;
						
						if(n1 > n2) p1++;
						else if(n2 > n1) p2++;
						
				}		

				cout << p1 << " " << p2 << endl;			
		}

		return 0;
}
