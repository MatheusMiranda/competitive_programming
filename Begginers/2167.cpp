#include <iostream>

using namespace std;

int main(){

			int n,num;
			cin >> n;
			int ant = -100,ind;	

			for(int i = 1;i <= n;++i){
				cin >> num;
					
				if(num < ant){
						ind = i;
						break;
				}				
					
				ant = num;
			}	

			cout << ind << endl;			

			return 0;
}
