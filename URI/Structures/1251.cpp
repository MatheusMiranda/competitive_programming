#include <algorithm>
#include <map>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

using ii = pair<int,int>;

map<int,int> dic;
vector<ii> vetor;

bool myfunc(ii pq, ii p2){
			
			if(pq.second == p2.second) return pq.first > p2.first;	

			return pq.second < p2.second;

}				

int main(){
			
			string linha;
			int contador = 0;

			while(getline(cin,linha)){
							
					for(int i = 0;i < linha.size();++i){
							int valor = (int)linha[i];

							if(!dic[valor]) dic[valor] = 1;
							else dic[valor]++;
	
					}

					
					map<int,int>::iterator it;

					for(it = dic.begin();it != dic.end();++it){
							vetor.push_back(ii(it->first,it->second));			
					}

					sort(vetor.begin(),vetor.end(),myfunc);			

					if(contador > 0) printf("\n");
					contador++;

					for(int i = 0; i < vetor.size();++i){
							printf("%d %d\n",vetor[i].first,vetor[i].second);
	
					}		
					
					dic.clear();
					vetor.clear();

			}
	
			return 0;
}

