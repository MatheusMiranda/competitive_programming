#include <iostream>
#include <vector>

using namespace std;

using ii = pair<int,int>;
vector<ii> vetor;

int main(){

		int n;
		int caso = 0;
		int p,gasto;

		while(cin >> n){
				for(int i = 0;i < n;++i){
							cin >> p >> gasto;

							vetor.push_back(ii(p,(gasto / p)));
				}
		}
	
		return 0;
}
