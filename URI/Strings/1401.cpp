#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

		int n;
		scanf("%d",&n);
		string palavra;
		int vetor[] = {1,2,3};

		while(n--){
				cin >> palavra;
				
				do{
						for(auto letra : palavra)printf("%c ",letra);
						printf("\n");					
				}while(next_permutation(palavra,3));					

		}				

		return 0;
}
