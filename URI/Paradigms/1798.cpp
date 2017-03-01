#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

using ii = pair<int,int>;

vector<ii> vetor;
				int dp[1000][2000];
int n,t;

long long func(int ix,int remain){

		if(remain <= 0) return 0;

		if(ix == n)return 0;

		if(dp[ix][remain] != -1) return dp[ix][remain];

		long long ans;
		
		if(vetor[ix].first <= remain)
			ans = max(max(func(ix+1,remain - vetor[ix].first) + vetor[ix].second,func(ix,remain - vetor[ix].first) + vetor[ix].second),func(ix+1,remain));
		else
			ans = func(ix+1,remain);

		dp[ix][remain] = ans;		
		return ans;
}				

int main(){
	
		
		int comp,value;

		scanf("%d %d",&n,&t);
		memset(dp,-1,sizeof dp);

		for(int i = 0;i < n;++i){
				
				scanf("%d %d",&comp,&value);

				vetor.push_back(ii(comp,value));				
					

		}

		printf("%lld\n",func(0,t));
	
		return 0;
}
