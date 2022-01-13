#include <iostream>
#include <stack>
#include <vector>

using namespace std;

stack<int> pilha;
vector<int> vetor;

int main(){

		int total;
		int vag;
		int cont;
		int flag = 0;

		while(scanf("%d",&total),total){

						while(scanf("%d",&vag),vag){
										vetor.push_back(vag);
										cont = total;
										for(int i = 1;i < total;++i){
														scanf("%d",&vag);
														//if(vag == 0){
															//			flag = 1;
																//		printf("\n");	 
																	//	break;
														//}		

														vetor.push_back(vag);
										}			


										//if(flag == 1){
										//	flag = 0;
										//	vetor.clear();
										//	continue;
										//	}

										for(int i = total - 1;i >= 0;--i){
														pilha.push(vetor[i]);
														while(pilha.top() == cont){
																		pilha.pop();
																		cont--;
																		if(pilha.empty()) break;
														}				
										}

										if(pilha.empty()) printf("Yes\n");
										else printf("No\n");

										while(!pilha.empty()) pilha.pop();
										vetor.clear();

						}

						printf("\n");

		}

		return 0;
}
