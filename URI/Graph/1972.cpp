#include <iostream>
#include <cstring>
#include <queue>

using namespace std;
using ii = pair<int,int>;
using vi = vector<ii>;
using edge = pair<int,ii>;

#define MAX 520
#define INF 500000000

char matrizona[MAX][MAX];
unsigned int dists[MAX][MAX];

priority_queue<edge,vector<edge>,greater<edge> > pq;

void digs(int w,int l){
		
		memset(matrizona,0,sizeof matrizona);
		memset(dists,-1,sizeof dists);
	
		pq.push(edge(0,ii(w,l)));
		dists[w][l] = 0;

		while(!pq.empty()){

				edge front = pq.top();pq.pop();

				int distancia = front.first;
				int x = front.second.first;
				int y = front.second.second;			
	
				if(distancia > (int)dists[x][y]) return;

				for(int i=-1; i<=1; i+=2){
						if(matrizona[x+i][y]!='H' and matrizona[x+i][y]!='#' and dists[x][y]+matrizona[x+i][y]<dists[x+i][y]){
							if(matrizona[x+i][y] != '.'){
								dists[x+i][y]=dists[x][y]+matrizona[x+i][y];
								pq.push(edge(dists[x+i][y], ii(x+i, y)));
							}
						}
				}

				for(int i=-1; i<=1; i+=2){
						if(matrizona[x][y+i]!='H' and matrizona[x][y+1]!='#' and dists[x][y]+matrizona[x][y+i]<dists[x][y+i]){
							if(matrizona[x][y+i] != '.'){	
								dists[x][y+i]=dists[x][y]+matrizona[x][y+i];
								pq.push(edge(dists[x][y+i], ii(x, y+i)));
							}
						}
				}

		}				
		

}

int main(){

		ii comeco,fim;
		int n,m;

		scanf("%d %d",&n,&m);

		for(int i = 1;i <= n;++i){

				for(int j = 1;j <= m;++j){
			
						scanf("%c",&matrizona[i][j]);
						if(matrizona[i][j] == 'H'){
								comeco = make_pair(i,j);
						}
						else if(matrizona[i][j] == 'E'){
								fim = make_pair(i,j);
						}
				}				
		

		}

		digs(comeco.first,comeco.second);

		printf("%d\n",dists[fim.first][fim.second]);

		return 0;
}
