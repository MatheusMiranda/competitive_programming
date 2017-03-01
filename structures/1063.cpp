#include <iostream>
#include <stack>
#include <map>

using namespace std;

map<char,int> dic;
map<int,char> rev;

int main(){

		int letra;
		int n;

		while(scanf("%d",&n),n){
				for(int i = 0;i < n;++i){
					cin >> letra;
					dic[letra] = i+1;
					rev[i+1] = letra;
				}	
		}

		return 0;
}
