#include <iostream>

using namespace std;

using ll = long long;

int mdc(ll a,ll b){
		return (!b)? a : mdc(b,a%b);
}				

int main(){

		int n;
		cin >> n;
		long long a,b;
		while(n--){
				cin >> a >> b;
				long long result = mdc(a,b);		
				cout << result << endl;
		}

		return 0;
}
