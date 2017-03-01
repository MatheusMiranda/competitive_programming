#include <iostream>
#include <map>

using namespace std;

map<int,int> dic;

int main(){

		int n,k;
		int contador;
		int num;

		while(scanf("%d %d",&n,&k),n|k){
				contador = 0;
				
				while(n--){
					cin >> num;
					if(!dic[num]) dic[num] = 1;
					else dic[num]++;

					if(dic[num] == k) contador++;
								
				}

				printf("%d\n",contador);				
				dic.clear();				
		}

		return 0;
}
