#include <iostream>
#include <string>
#include <map>

using namespace std;

int mat[6][6];
map<string,int> dic;

int main(){

				int caso = 0;
				int n;
				dic["pedra"] = 1;
				dic["papel"] = 2;
				dic["tesoura"] = 3;
				dic["lagarto"] = 4;
				dic["spock"] = 5;

				mat[3][2] = 1;
				mat[2][1] = 1;
				mat[1][4] = 1;
				mat[4][5] = 1;
				mat[5][3] = 1;
				mat[3][4] = 1;
				mat[4][2] = 1;
				mat[2][5] = 1;
				mat[5][1] = 1;
				mat[1][3] = 1;

				cin >> n;

				string s,r;
				while(n--){

								cin >> s >> r;

								if(s == r) printf("empate\n");			
								else{
												if(mat[dic[s]][dic[r]] == 1) printf("rajesh\n"); 
												else printf("sheldon\n");
								}
				}

				return 0;
}


