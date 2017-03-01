#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

using ii = pair<int,int>;

vector<ii> vetor;

int matrizona[210][1100];

long long  func(int item,int remain){
		
		if(remain <= 0) return 0;

		if(item == vetor.size())return 0;

		if(matrizona[item][remain] != -1) return matrizona[item][remain];

		long long ans;
		if(vetor[item].first <= remain){
				ans = max(func(item + 1,remain),func(item + 1,remain - vetor[item].first) + vetor[item].second);
		}else{
				ans = func(item+1,remain);
		}

		/*
		 long long ans = func(item + 1,remain);
		 if(vetor[item].first <= remain){
				and = max(ans,func(item + 1,remain - vetor[item].first) + vetor[item].second);
		 }
		*/ 		

		matrizona[item][remain] = ans;
		return ans;
}				

int main(){

		int n;
		int cap,qt;
		cin >> n;

		while(n--){
					scanf("%d %d",&cap,&qt);

						int w,val;

						memset(matrizona,-1,sizeof matrizona);

						while(qt--){

										scanf("%d %d",&w,&val);
										vetor.push_back(ii(w,val));

						}

						printf("Hey stupid robber, you can get %lld.\n",func(0,cap));
						vetor.clear();
		}

		return 0;
}
