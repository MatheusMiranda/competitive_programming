#include <istream>
#include <cstring>
#include <map>

using namespace std;

int matriona[25][25];

using ii = pair<int,int>;

map<ii,int> dic;

int dp[25][25];

int main(){
		
		int n;
		int num;
		ii par;
		scanf("%d",&n);

				int x,y;
				int beginx,beginy;
				int bx,by;

		while(n--){

				memset(matrizona,0,sizeof matrizona);
		
				scanf("%d %d",&x,&y);
				scanf("%d %d",&beginx,&beginy);			
				scanf("%d",&num);	
				
				while(num--){
					scanf("%d %d",&bx,&by);
					matrizona[bx][by] = 1;
					dic[ii(bx,by)] = 1;
				}
	
				printf("%d",tsp(x,y,0));

		}

		return 0;
}
