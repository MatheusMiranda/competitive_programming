#include <bits/stdc++.h>

using namespace std;

vector<int> vet;

int main(){

	int n,k,a,total = 0;

	cin >> n >> k;
	int cont = 0;

	while(n--){
		cin >> a;
		total += a;
		int disc = min(8,total);
		total -= disc;
		k -= disc;
		cont++;
		if(k <= 0) break;
	}
		
	if(k <= 0) cout << cont << endl;
	else cout << "-1" << endl;

	return 0;
}
