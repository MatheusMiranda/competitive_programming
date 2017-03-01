#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> par;
vector<int> impar;

bool funcao(int n1,int n2){
		if(n1%2 == 0){
				
					return n1 < n2;

		}

	
		return n1 > n2;	

}

int main(){
		int n;
		int l; 
		cin >> n;
	
		while(n--){
				cin >> l;
				if(l%2 != 0)impar.push_back(l);
				else par.push_back(l);
		}

		sort(par.begin(),par.end(),funcao);
		sort(impar.begin(),impar.end(),funcao);

		for(auto k : par) cout << k << endl;
		for(auto k : impar) cout << k << endl;

		return 0;
}

