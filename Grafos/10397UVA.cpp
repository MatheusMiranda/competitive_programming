#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>

using namespace std;
using vi = vector<int>;
using ii = pair<int,int>;
using edge = pair<double,ii>;

#define MAX 800
int ranks[MAX];
int pai[MAX];
vector<ii> cord;

priority_queue<edge,vector<edge>,greater<edge> > pq;

int acha_pai(int no){

		if(pai[no] == no){
				return no;
		}else{
				return acha_pai(pai[no]);
		}

}

void faz_uniao(int no1,int no2){

		int pai1 = acha_pai(no1);
		int pai2 = acha_pai(no2);

		if(ranks[pai1] >= ranks[pai2]){
				ranks[pai1]++;
				pai[pai2] = pai[pai1];
		}else{
				ranks[pai2]++;
				pai[pai1] = pai[pai2];
		}

}

double kruskal(){

	double D = 0;

	while(!pq.empty()){

			auto e = pq.top();pq.pop();

			double distancia = e.first;

			int l = e.second.first;
			int t = e.second.second;

			if(acha_pai(l) != acha_pai(t)){

							faz_uniao(l,t);
							D+=distancia;
			}



	}

	return D;
}

int main(){

		int n;

		while(scanf("%d",&n) != EOF){

				memset(pai,0,sizeof pai);
				memset(ranks,0,sizeof ranks);

				int cordx,cordy;
				cord.push_back(ii(0,0));
				for(int i = 0;i<n;++i){

						scanf("%d %d",&cordx,&cordy);
						cord.push_back(ii(cordx,cordy));

				}

				int k = 0;
				for(int x = 1;x <= n;++x){

						for(int y = 1;y <= n;++y){

								if(x != y){

										double distancia = hypot(cord[x].first - cord[y].first,cord[x].second - cord[y].second);
										pq.push(edge(distancia,ii(x,y)));

								}

						}
						k+=1;
				}

				for(int a = 1;a <= n;++a){
						pai[a] = a;
				}

				int pre,c1,c2;

				scanf("%d",&pre);

				for(int q = 0;q < pre;++q){

						scanf("%d %d",&c1,&c2);

						faz_uniao(c1,c2);
				}

				double D = kruskal();

				printf("%.2lf\n",D);

				cord.clear();

		}


		return 0;
}
