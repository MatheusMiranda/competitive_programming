#include <iostream>
#include <string>

using namespace std;

int main(){

		string acao;		
		int n,m;
		cin >> n >> m;
		while(m--){
			cin >> acao;

			if(acao == "fechou")n+=1;
			else n-=1;

		}				

		printf("%d\n",n);

		return 0;
}
