#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> vetor;

int main(){

		int c,s;
		int mass;
		int caso = 0;

		while(cin >> c >> s){
						int cont = s;
						while(cont--){
										scanf("%d",&mass);
										vetor.push_back(mass);
						}

						if(s > c){
										int dif = (2 * c) - s;
										while(dif--){
														vetor.push_back(0);
										}

										sort(vetor.begin(),vetor.end());

										cout << "Printando vetor" << endl;
										for(auto it : vetor){

												cout << it << " ";
										}	
										cout << endl;		

										int begin = 0;
										int end = vetor.size() - 1;

										printf("Set #%d\n",++caso);
										for(int i = 0;i < c;++i){
														printf(" %d:",i);

														if(vetor[begin] != 0)printf(" %d",vetor[begin]);
														if(vetor[end] != 0)printf(" %d",vetor[end]);
														begin++;
														end--;

														printf("\n");
										}	
										//printf("\n");
										
						}

		}

		return 0;
}
