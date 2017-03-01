#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<int> vetor;

int dp[1100][1100][2];

int func(int dir,int esq,int quem){
		
				if(dir == esq){
						if(quem) return vetor[dir];
						else return -vetor[dir];
				}		

				if(dp[dir][esq][quem] != -1) return dp[dir][esq][quem];			

				int ans = 0;

				if(quem){
						ans = max(func(dir -1,esq,0) + vetor[dir],func(dir,esq+1,0) + vetor[esq]);		
				}else{		
						if(vetor[dir] > vetor[esq]) ans = func(dir-1,esq,1) - vetor[dir];
						else ans = func(dir,esq+1,1) - vetor[esq];
				}

				dp[dir][esq][quem] = ans;		

				return ans;

}				

int main(){

			int n;
			int a;
			int numero;
			int teste = 0;
			while(scanf("%d",&a),a){

							n = a;

							memset(dp,-1,sizeof dp);

							while(n--){
											cin >> numero;
											vetor.push_back(numero);
							}		

							printf("In game %d, the greedy strategy might lose by as many as %d points.\n",++teste,func(a-1,0,1));	
							vetor.clear();	
			}
			return 0;
}
