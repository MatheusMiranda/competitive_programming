#include <string>
#include <iostream>

using namespace std;

int main(){

		int n,m;
		string num;

		while(scanf("%d %d",&n,&m),n | m){
				int soma = n + m;
				num = to_string(soma);

				for(int i = 0;i < num.size();++i){
						if(num[i] != '0') printf("%c",num[i]);
				}

				printf("\n");
		}

		return 0;
}
