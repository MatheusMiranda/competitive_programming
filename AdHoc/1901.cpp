#include <iostream>
#include <map>

using namespace std;

int matrizona[300][300];

map<int,int> dic;

int main(){

		int n;
		cin >> n;
		int b;
	

		for(int i = 1;i <= 3;++i)
				for(int j = 1;j <= 3;++j)
						cin >> matrizona[i][j];
				
		
		int k = 2*n;

		int x,y,contador = 0;

		while(k--){
				cin >> x >> y;

				if(!dic[matrizona[x][y]]) contador++;
				
				dic[matrizona[x][y]] = 1;
						
		}

		cout << contador << endl;

		return 0;
}
