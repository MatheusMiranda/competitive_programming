#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

using ii = pair<int,int>;
using iii = pair<int,ii>;

vector<int> pilhas[3];
int dp[130][130][130];

vector<iii> vetorzao {iii(1,ii(0,0)),iii(0,ii(1,0)),iii(0,ii(0,1)),iii(1,ii(1,0)),iii(1,ii(0,1)),iii(0,ii(1,1)),iii(1,ii(1,1)) };						

int func(int q0,int q1,int q2){
		
		if(q0 == pilhas[0].size() && q1 == pilhas[1].size() && q2 == pilhas[2].size()) return 1;
	
		if(q0 > pilhas[0].size() || q1 > pilhas[1].size() || q2 > pilhas[2].size()) return 0;

		if(dp[q0][q1][q2] != -1) return dp[q0][q1][q2];
		
		int ans = 0;
		for(auto it : vetorzao){
				int soma = 0;
				if(it.first) soma+=pilhas[0][q0];
				if(it.second.first)	soma+= pilhas[1][q1];
				if(it.second.second) soma+=pilhas[2][q2];

				if(soma%3 == 0){
						ans = max(ans,func(q0 + it.first,q1 + it.second.first,q2 + it.second.second));
				}			

		}				

		dp[q0][q1][q2] = ans;
		return ans; 

}			

int main(){

		int n;
		int n1,n2,n3;

		while(scanf("%d",&n),n){

						memset(dp,-1,sizeof dp);
						pilhas[0].clear();pilhas[1].clear();pilhas[2].clear();

						for(int i = 0;i < n;++i){
										scanf("%d",&n1);
										scanf("%d",&n2);
										scanf("%d",&n3);

										pilhas[0].push_back(n1);
										pilhas[1].push_back(n2);
										pilhas[2].push_back(n3);

						}

						int resp = func(0,0,0);
						printf("%d\n",resp);

		}

		return 0;
}

