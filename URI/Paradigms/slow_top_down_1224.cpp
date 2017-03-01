#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<int> vetor;
int dp[10000][10000];

int func(int esq,int dir){

		if(dir == esq + 1){
					return max(vetor[dir],vetor[esq]);
		}
		if(dir == esq) return vetor[dir];
		
		if(dp[esq][dir] != -1) return dp[esq][dir];
		
		int ans = 0;

		ans = max(vetor[esq] + min(func(esq+2,dir),func(esq,dir-1)),
		vetor[dir] + min(func(esq,dir-2),func(esq+1,dir))); 							

		dp[esq][dir] = ans;		
		return ans;
}				

int main(){

		int n;
		int numero;

		while(cin >> n){

				memset(dp,-1,sizeof dp);
				int a = n;
				while(a--){
					cin >> numero;
					vetor.push_back(numero);
				}			

				printf("%d\n",func(0,n - 1));
				vetor.clear();
		}

		return 0;
}
