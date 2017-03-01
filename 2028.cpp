#include <iostream>
#include <vector>

using namespace std;

int main(){

		int n,caso = 1;
		vector<int> num;

		while(cin >> n){

				for(int i = 0;i <= n;++i){

						for(int j = 0;j<i;++j){
								num.push_back(i);
						}		
				}

				if(num.size() == 1){
						printf("Caso %d: 1 numero\n",caso++);
						for(auto v : num){
								printf("%d ",v);
						}
						printf("\n\n");				
				}else{
						printf("Caso %d: %d numeros\n",caso++,num.size());
						for(auto v : num){
								printf("%d ",v);
						}
						printf("\n\n");
				}				

		}



		return 0;
}
