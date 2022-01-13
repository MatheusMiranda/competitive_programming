#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
using ii = pair<int,int>; 

int maximo;
int n;

long long dp[40][40];

vector<ii> vetor;

long long func(int indice,int remain){

		if(remain == 0 || indice == n)return 0;	

		if(dp[indice][remain] != -1) return dp[indice][remain];		

		long long ans = 0;
			
		if(vetor[indice].second <= remain){
				ans = max(func(indice+1,remain-vetor[indice].second) + vetor[indice].first,func(indice+1,remain));
		}else{
				ans = func(indice+1,remain);
		}

		return dp[indice][remain] = ans;	

}	

int main(){


	while(scanf("%d",&n),n){
			
			int tempo,qt;

			scanf("%d",&maximo);
			
			memset(dp,-1,sizeof dp);

			for(int i =0;i < n;++i){
					scanf("%d %d",&tempo,&qt);
					vetor.push_back(ii(tempo,qt));		
			}

			printf("%lld min.\n",func(0,maximo));

			vetor.clear();

	}

	return 0;
}
