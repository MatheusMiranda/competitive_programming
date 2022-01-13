#include <iostream>

using namespace std;

int main(){

		int n,d;
		int i1,i2;
		int num;

		while(scanf("%d %d",&n,&d),n | d){
				
				cin >> i1;
				n--;		
				while(n--){
						cin >> num;
				}	
			
				cin >> num;
				cin >> i2;
				d-=2;
				while(d--){
					cin >> num;				
				}

				if(i1 < i2) printf("Y\n");
				else printf("N\n");				

		}
		
		return 0;
}
