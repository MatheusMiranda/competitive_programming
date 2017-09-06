#include <iostream>
#include <string>

using namespace std;

int main(){
		
		string palavra;

		while(1){
			cin >> palavra;
			if(palavra == "0") break;	

			int k = (int)palavra.size();
			long long fat = 1;

			for(int i = 1; i <= k;++i){
					fat*=i;
			}	

			cout << fat << endl;			
	
		}

		return 0;
}
