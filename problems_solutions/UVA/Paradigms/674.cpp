#include <iostream>
#include <cstring>

#define mp(x,y,z) make_pair(x,make_pair(y,z));

using namespace std;

int vet[] {1,5,10,25,50};

int dp[6][8000];

int func(int index,int remain){
	
		if(dp[index][remain] != -1) return dp[index][remain];		
		if(	index == 5 || remain < 0) return 0;	
		if( remain == 0) return 1;
		
		return dp[index][remain] = func(index,remain - vet[index]) + func(index+1,remain);	
	
}				

int main(){

		int n;

		memset(dp,-1,sizeof dp);
		while(scanf("%d",&n) != EOF){
			printf("%d\n",func(0,n));
			
		}
	

		return 0;
}
