#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

vector<string> vetor;

int main(){

				int n;
				string nome;
				int maior = -1;
				int esp;
				int caso = 0;

				while(scanf("%d",&n),n){
								if(caso > 0) printf("\n");
								maior = -1;
								while(n--){			
												cin >> nome;
												vetor.push_back(nome);
												if((int)nome.size() > maior) maior = (int)nome.size();
								}

								for(int i = 0;i < vetor.size();++i){
												std::cout << std::setw(maior);
												cout << vetor[i] << endl;
								}

								vetor.clear();
								caso++;
				}


				return 0;
}
