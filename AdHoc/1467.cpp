#include <iostream>
#include <string>

using namespace std;

int main(){
			
		string s1 = "1 0 0",s2 = "0 1 0",s3 = "0 0 1",s4 = "0 1 1",s5 = "1 0 1",s6 = "1 1 0";
		string linha;

		while(getline(cin,linha)){
				if(linha == s1 || linha == s4) printf("A\n");
				else if(linha == s2 || linha == s5)printf("B\n");
				else if(linha == s3 || linha == s6)printf("C\n");
				else printf("*\n");
		
		}				

		return 0;
}				
