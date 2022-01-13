#include <iostream>
#include <cstring>

using namespace std;

int matrizona[7][7];

using ii = pair<int,int>;

ii us[] {ii(-1,0),ii(0,1),ii(1,0),ii(0,-1)}; 

int dfs(int x,int y){
		
				matrizona[x][y] = 1;
		
		for(auto it : us){
				int a = x + it.first;
				int b = y + it.second;

				if(a < 1 || a > 5 || b < 1 || b > 5) continue;

				if(matrizona[a][b] == 0){
						dfs(a,b);								
				}

		}								
				
}

int main(){

		int n;
		cin >> n;

		while(n--){

			for(int i = 1;i <= 5;++i)
				for(int j = 1;j <= 5;++j)
							scanf("%d",&matrizona[i][j]);
							
			int x = 1;
			int y = 1;		

			dfs(x,y);

			if(matrizona[5][5] == 1){
					printf("COPS\n");
			}
			else printf("ROBBERS\n");					

		}				


		return 0;
}
