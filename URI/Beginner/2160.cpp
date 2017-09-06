#include <iostream>
#include <string>

using namespace std;

int main(){
		
		string linha;

		getline(cin,linha);

		if(linha.size()<=80)printf("YES\n");
		else printf("NO\n");		


		return 0;
}
