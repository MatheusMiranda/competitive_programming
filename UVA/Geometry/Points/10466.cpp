#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

using ii = pair<int,int>;
using dd = pair<double,double>;

#define PI 3.141592653589793
dd vet[55];

vector<ii> vetor;

int main(){

		int n,T;

		while(scanf("%d %d",&n,&T) != EOF){
			vetor.clear();
			int d,t;

			while(n--){

				scanf("%d %d",&d,&t);
				vetor.push_back(ii(d,t));

			}

			for(int i =0;i< vetor.size();++i){

				int sobra = T % vetor[i].second; 

				double ang = (sobra * 2.0 * PI) / vetor[i].second;	

				double cx = cos(ang) * vetor[i].first;	
				double cy = sin(ang) * vetor[i].first;

				vet[i].first = cx;
				vet[i].second = cy;

				if(i == 0) {		
					double x = vet[i].first;
					double y = vet[i].second;
					printf("%.4lf", sqrt(x*x + y*y));
				} else{
					vet[i].first += vet[i -1 ].first;
					vet[i].second += vet[i-1].second;
					double x = vet[i].first;
					double y = vet[i].second;
					printf(" %.4lf", sqrt(x*x + y*y));
				}			


			}
			printf("\n");

		}

		return 0;
}
