#include <iostream>
#include <vector>

using namespace std;

vector<int> vetor;
vector<int> outro;

int main(){
			
		int n;		

		for(int i = 0;i < 5;++i){
				scanf("%d",&n);
				vetor.push_back(n);
		}				
		for(int i = 0;i < 5;++i){
				scanf("%d",&n);
				outro.push_back(n);
		}				

		int flag = 1;	
		for(int i = 0;i < 5;++i){
				if(vetor[i] == outro[i]){
						flag = 0;
						break;
				}					

		}				

		if(flag) printf("Y\n");
		else printf("N\n");


		return 0;
}
