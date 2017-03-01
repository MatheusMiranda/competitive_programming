#include <iostream>
#include <queue>
#include <vector>

using namespace std;
using ii = pair<int,int>;

queue<ii> fila;

int main(){

		int n,m;
		int numero;

		while(scanf("%d %d",&n,&m), n | m){
				
				int ini = 1;
				int momento = 2;

				fila.push(ii(ini,momento));

				int flag = 0;

				while(!fila.empty()){
						
						int atual = fila.front().first;
						int momentoatual = fila.front().second;
						fila.pop();


						int des = (2*momentoatual) - 1;
						if(atual + des == m || atual - des == m){
								flag = 1;
								break;
						}				
		
						if(atual - des >= 1){
								fila.push(ii(atual - des,momentoatual + 1));
						}				
						if(atual + des <= n){
								fila.push(ii(atual + des,momentoatual + 1));
						}		
				

				}

				if(flag) printf("Let me try!\n");
				else printf("Don't make fun of me!\n");

				while(!fila.empty()) fila.pop();

		}				

		return 0;
}
