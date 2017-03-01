#include <iostream>
#include <string>
#include <bitset>
#include <cstring>

#define MAX 220

using namespace std;

bitset<28> matrizona[MAX][MAX];

int main(){

	int n;


	int a,b;
	string palavra;

	bitset<28> my_bitmask;

	while(cin >> n){

		if(n == 0) break;

		for(int i = 0;i < MAX;++i)
						for(int j = 0;j < MAX;++j)
										matrizona[i][j] = 0;

		while(1){

			cin >> a >> b;


			if(a == 0 && b == 0) break;

			cin >> palavra;
			my_bitmask = 0;

			for(auto it : palavra){

				my_bitmask[it - 97] = 1;

			}

			matrizona[a][b] = my_bitmask;
		}

		for(int k = 1;k <= n;++k)
			for(int i = 1;i <= n;++i)
				for(int j = 1;j <= n;++j)
					matrizona[i][j] = matrizona[i][j] | (matrizona[i][k] & matrizona[k][j]);

		int ori,dest;

		while(1){

			cin >> ori >> dest;

			if(ori == 0 && dest == 0) break;

			int contador = 0;


			for(int i = 0; i < 27;++i){
				if(matrizona[ori][dest][i]){
					contador ++;
				  printf("%c",i + 97);
				}
			}

			if(contador == 0) printf("-\n");
			else printf("\n");

		}

		printf("\n");
	}



	return 0;
}
