#include <iostream>
#include <bitset>
#include <cstring>

using namespace std;

#define MAX 

int n;

int matrizona[20][20];
int dp[20][300000];

int func(int tempo,bitset<19> time){
			if(time.count() == n){
							return 0;
			}

			if(dp[tempo][time.to_ulong()] != -1){
						return dp[tempo][time.to_ulong()];
			}							

			int ans = 1<<30;

			for(int i = 0;i < n;++i){
					if(time[i] == 0){
						time[i] = 1;
						ans = min(ans,func(tempo + 1,time) + matrizona[i][tempo]);
						time[i] = 0;
					}			
			}

			dp[tempo][time.to_ulong()] = ans;
			return ans;

}				

int main(){
		
				while(scanf("%d",&n),n){

								memset(dp,-1,sizeof dp);

								for(int i = 0;i < n;++i)
												for(int j = 0;j < n;++j)
																scanf("%d",&matrizona[i][j]);

								bitset<19> tentativa;

								printf("%d\n",func(0,tentativa));

				}

		return 0;
}
