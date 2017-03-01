#include <iostream>
#include <queue>
#include <vector>

using namespace std;
using ii = pair<int,int>;
using vi = vector<int>;
using edge = pair<int,ii>;

vector<ii> vetorzao[MAX];

#define MAX 10100
#define INF 300000000

int main(){

		int n,c,s,b;

		scanf("%d %d %d %d",n,c,s,b);

		int a,b,d;
		for(int i = 0;i < c;++i){
					
				scanf("%d %d %d",a,b,d);

				vetorzao[a].push_back(ii(b,d));
				vetorzao[b].push_back(ii(a,d));

		}

		for()


		return 0;
}

