#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> vetorzao[1100];

int main(){

		string relacao;

		int n;
		string ori,dest;
		while(scanf("%d",&n),n){
				ori = "";
				dest = "";
				while(n--){
						cin >> relacao;
						
						for(int i = 1;i < relacao.size() - 1;++i){
								while(relacao[i] != ','){
										ori += relacao[i];		
								}	
											
						}									

				}
		}

		return 0;
}
