#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

using ii = pair<string,int>;
using i2 = pair<int,float>;

using q = pair<ii,i2>;

vector<q> vetor;

bool func(q p,q s){
			
		if(p.first.second == s.first.second){
				
					if(p.second.first == s.second.first){
									
								if(p.second.second == s.second.second){

											return p.first.first < s.first.first;
								}

								return p.second.second < s.second.second;
					}				
			
					return p.second.first < s.second.first;	
		}

		return p.first.second > s.first.second;	

}				

int main(){

		int t;
		int renas,vez;
		string nome;
		int peso,idade;
		float altura;
		int caso = 0;

		scanf("%d",&t);

		while(t--){
				scanf("%d %d",&renas,&vez);
				
				while(renas--){
					cin >> nome >> peso >> idade >> altura;
					vetor.push_back(q(ii(nome,peso),i2(idade,altura)));					
				}
	
				sort(vetor.begin(),vetor.end(),func);

				printf("CENARIO {%d}\n",++caso);
				for(int i = 0;i < vez;++i){
						printf("%d - %s\n",i + 1,vetor[i].first.first.c_str());
				}

								vetor.clear();				

		}				

		return 0;
}
