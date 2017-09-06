#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

using ii = pair<int,int>;

vector<ii> vetor;

int main(){
	
		int n;
		cin >> n;
		int n1,n2;
		int num;

		while(n--){
				cin >> n1 >> n2;

				for(int i = 1;i <= n1;++i){
						cin >> num;
						int a = num - n2;
						if(a < 0) a*=-1;
						vetor.push_back(ii(a,i));
				}					

				sort(vetor.begin(),vetor.end());

				printf("%d\n",vetor[0].second);
				vetor.clear();
						
		}

		return 0;
}
