#include <iostream>
#include <vector>

using namespace std;

vector<int> vetor;

int main(){

		int n;
		int contador = 0;
		int caso = 0;
		while(cin >> n){
				vetor.clear();
				vetor.push_back(0);
			
				for(int i = 1; i <= n; ++ i){
						
						for(int j = 1;j <= i;++j){
								vetor.push_back(i);
						}
				}
				
				if(vetor.size() == 1){
							 	printf("Caso %d: 1 numero\n",++caso);
								printf("0");
				}						
				else{
									printf("Caso %d: %d numeros\n",++caso,(int)vetor.size());
									for(int a = 0;a < vetor.size();++a){
											if(a == 0) printf("0");
											else printf(" %d",vetor[a]);
									}
				}
			
									printf("\n\n");		
		}

		return 0;
}
