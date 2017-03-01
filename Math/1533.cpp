#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

using ii = pair<int,int>;

vector<ii> vetor;

bool func(ii par1,ii par2){
			return par1.first > par2.first;
}				

int main(){
	
		int n;
		int maior;
		int indice;
		int num;
		while(scanf("%d",&n),n){
				maior = -1;
				for(int i = 0;i < n;++i){
						scanf("%d",&num);
						vetor.push_back(ii(num,i+1));
				}
				
				sort(vetor.begin(),vetor.end(),func);

				printf("%d\n",vetor[1].second);
				vetor.clear();
		}			

		return 0;
}
