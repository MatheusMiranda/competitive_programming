#include <iostream>
#include <vector>

using namespace std;

int main(){

		int n;
		vector<int> vetor;

		while(scanf("%d",&n),n){
				
				for(int i = 1;i <= n;++i) vetor.push_back(i);
	
		int ini;
		printf("Discarded cards: ");
		while(vetor.size() - 1){

				ini = vetor.front();
				vetor.erase(vetor.begin());
				if(vetor.size() - 1 != 0)printf("%d, ",ini);
				else printf("%d",ini);		
				ini = vetor.front();
				vetor.erase(vetor.begin());
				vetor.push_back(ini);	

		}

		printf("\nRemaining card: %d\n",vetor[0]);

		vetor.clear();

		}
		return 0;
}


