#include <iostream>
#include <map>
#include <string>
#include <stack>

using namespace std;

#define MAX 110
#define INF 500000000

map<string,int> dic;
map<int,string> reverse;

int matrizona[MAX][MAX];
int parents[MAX][MAX];

int contador = 0;

int main(){

		int c,p;

		scanf("%d",&c);

		for(int b = 0;b < c;++b){

				scanf("%d",&p);

				string palavra;

				for(int a = 1;a <= p;++a){
						cin >> palavra;
						dic[palavra] = a;
						reverse[a] = palavra;
				}

				for(int i = 1;i <= p;++i){
						for(int j = 1;j <= p;++j){
								cin >> matrizona[i][j];
								if(matrizona[i][j] == -1) matrizona[i][j] = INF;
						}
				}

				for(int i = 1;i <=p;++i)
						for(int j = 1;j <=p;++j)
								parents[i][j] = i;

				for(int k = 1;k <= p;++k)
					for(int i = 1;i <= p;++i)
						for(int j = 1;j <= p;++j)
							if(matrizona[i][k] + matrizona[k][j] < matrizona[i][j]){
									matrizona[i][j] = matrizona[i][k] + matrizona[k][j];
									parents[i][j]	= parents[k][j];
							}

				int r;

				scanf("%d",&r);

				for(int g = 0;g < r;++g){
								string func,ori,dest;

								cin >> func >> ori >> dest;

								if(matrizona[dic[ori]][dic[dest]] != INF){
												stack<string> pilha;
												cout << "Mr " << func << " to go from " << ori << " to " << dest << ", you will receive " << matrizona[dic[ori]][dic[dest]] << " euros" << endl;
												printf("Path:%s",ori.c_str());

												if(matrizona[dic[ori]][dic[dest]] == 0) printf(" %s",dest.c_str());

												int i = dic[ori];
												int j = dic[dest];
												while(i != j){
														pilha.push(reverse[j]);
														j = parents[i][j];
												}

												while(!pilha.empty()){
														printf(" %s",pilha.top().c_str());
														pilha.pop();
												}

												printf("\n");
								}else{
												cout << "Sorry Mr "<< func << " you can not go from " << ori << " to " << dest << endl;
								}
				}

				dic.clear();
				reverse.clear();
		}

		return 0;
}
