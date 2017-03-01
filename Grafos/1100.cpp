#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
#include <cstring>

#define MAX 8
#define INF 500000000

using namespace std;
using ii = pair<int,int>;

ii us[] {ii(1,2),ii(2,1),ii(2,-1),ii(1,-2),ii(-1,-2),ii(-2,-1),ii(-2,1),ii(-1,2)};

int matrizona[64][64];

map<char,int> dic;



int main(){

dic['a'] = 0;
dic['b'] = 1;
dic['c'] = 2;
dic['d'] = 3;
dic['e'] = 4;
dic['f'] = 5;
dic['g'] = 6;
dic['h'] = 7;

		for(int i = 0;i < 64;++i)
					for(int j = 0;j < 64;++j)
							if(i == j) matrizona[i][j] = 0;
							else matrizona[i][j] = INF;
	
		
		for(int i = 0;i < 8;++i){
				for(int j = 0;j < 8;++j){
					for(auto des : us){
							int toi = i + des.first;
							int toj = j + des.second;
												
							if(toi < 0 || toi >=8 || toj < 0 || toj >= 8) continue;

							int x = i*8 + j;
							int y = toi*8 + toj;

							matrizona[x][y]	= 1;
					}
				}
		}

		for(int k = 0;k < 64;++k)
				for(int i = 0;i < 64;++i)
						for(int j = 0;j < 64;++j)
								matrizona[i][j] = min(matrizona[i][j],matrizona[i][k] + matrizona[k][j]);
								
		
		string ori,dest;

				char x1,x2;
				int y1,y2;
		while(cin >> x1 >> y1 >> x2 >> y2){

				cout <<  "To get from " << x1 << y1 << " to " << x2 << y2  << " takes " <<  matrizona[dic[x1] * 8 + (y1 - 1)][dic[x2]*8 + (y2 - 1)] << " knight moves." << endl;

		}
		return 0;
}
