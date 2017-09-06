#include <iostream>
#include <string>
#include <map>

using namespace std;

#define MAX 27
#define INF 500000000

int matrizona[MAX][MAX];

int main(){

	int n,m;

	string palavra;
	map<int,string> reverse;
	map<string,int> dic;
	int teste = 0;

	while(scanf("%d %d",&n,&m),n){


					for(int i = 1;i <= n;++i){
									cin >> palavra;
									dic[palavra]  = i;
									reverse[i] = palavra;
					}

					int a,b;
					long long int peso;

					for(int i = 0;i < MAX;++i){
									for(int j = 0;j < MAX;++j){
													matrizona[i][j] = INF;
									}
					}

					for(int i = 0;i < m;++i){
									scanf("%d %d %lld",&a,&b,&peso);
									matrizona[a][b] = peso;
									matrizona[b][a] = peso;
					}

					for(int i = 0;i < MAX;i++)matrizona[i][i] = 0;

					for(int k = 1;k <= n;++k)
									for(int i = 1;i <= n;++i)
													for(int j = 1;j <= n;++j)
																	matrizona[i][j] = min(matrizona[i][j],matrizona[i][k] + matrizona[k][j]);

					long long int menor = INF;
					long long int soma = 0;
					int indice;

					for(int i = 1;i <= n;++i){
									for(int j = 1;j <= n;++j){
													soma += matrizona[i][j];
									}
									if(soma < menor){
													indice = i;
													menor = soma;
									}
									soma = 0;
					}

					cout << "Case #" << ++teste << " : " <<  reverse[indice] << endl;
					dic.clear();
					reverse.clear();

	}

	return 0;
}
