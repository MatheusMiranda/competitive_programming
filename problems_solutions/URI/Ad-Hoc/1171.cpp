#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

using ii = pair<int,int>;

vector<int> vetor;
map<int,int> dic;

int main(){

	int n,numero;
	cin >> n;

	while(n--){
			cin >> numero;
					
			if(!dic[numero]) dic[numero] = 1;
			else dic[numero]++;

	}

	map<int,int>::iterator it;

	for(it = dic.begin();it!= dic.end();++it){	
			vetor.push_back(it->first);
	}

	sort(vetor.begin(),vetor.end());

	for(auto i : vetor){
			printf("%d aparece %d vez(es)\n",i,dic[i]); 
	}				
	
	return 0;
}
