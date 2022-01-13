#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

map<int,vector<int> > htable;

int main(){

		int n;

		cin >> n;

		int modulo,nums;
		int numero;
		int chave;
		int turno = 0;

		while(n--){
			 cin >> modulo >> nums;

				if(turno > 0) printf("\n");
				turno++;

				while(nums--){
							cin >> numero;
							chave = numero % modulo;
						
							htable[chave].push_back(numero);
				}

				map<int,vector<int> >::iterator it;

				for(int i = 0;i < modulo;++i){
						if(htable[i].size() == 0){
							printf("%d -> \\\n",i);
						}else{
							printf("%d ->",i);
							for(int j = 0;j < (int)htable[i].size();++j){				
									printf(" %d ->",htable[i][j]);
							}
							printf(" \\");
							printf("\n");
						}				

				}

				htable.clear();
		}

		return 0;
}
