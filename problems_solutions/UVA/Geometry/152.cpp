#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;
#define mp(x,y,z) make_pair(x,make_pair(y,z))

#define MAX 5010

using ii = pair<double,double>;
using iii = pair<double,ii>;

vector<iii> vetor;
int vet[MAX];

double calc_dist(iii p1,iii p2){
		
		return sqrt(pow(p1.first - p2.first,2) + pow(p1.second.first - p2.second.first,2) + pow(p1.second.second - p2.second.second,2));
		
}	

int main(){

		double x,y,z;

		while(scanf("%lf %lf %lf",&x,&y,&z)){
				if(!x && !y && !z)break;	
					
				vetor.push_back(mp(x,y,z));	
	
		}

		int tam = vetor.size();


		for(int i = 0;i < tam;++i){
				double menor = 1<<30;	
				for(int j = 0; j < tam;++j){
						if(j == i) continue;
						menor = min(menor,calc_dist(vetor[i],vetor[j]));	
				}	
				
				if(menor >= 10) continue;
				vet[(int)menor] += 1;
				
		}

		for(int i = 0;i< 10;++i){
				if(i == 0) printf("%4d",vet[i]);
				else printf("%4d",vet[i]);

		}

		printf("\n");
		

		return 0;
}
