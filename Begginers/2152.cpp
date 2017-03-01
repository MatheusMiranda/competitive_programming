#include <iostream>

using namespace std;

int main(){

		int n;
		cin >> n;
		int h,m,o;

		while(n--){
						cin >> h >> m >> o;

						if(h == 0) cout << "00";
						else if(h < 10) cout << ":0" << h;
						else cout << h;

						if(m == 0) cout << ":00";
						else if(m < 10) cout << ":0" << m;
						else cout << ":" << m;

						if(o == 1) printf(" - A porta abriu!\n");
						else printf(" - A porta fechou!\n");
		}
	
		return 0;
}
