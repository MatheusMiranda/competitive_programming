#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string,string> dic;

int main(){

		string p1,p2,p3,p4;
		int n;
		cin >> n;
		long long int n1,n2;
		long long int soma;

		while(n--){
				soma = 0;
				cin >> p1 >> p2 >> p3 >> p4;
				
				dic[p4] = p3;
				dic[p2] = p1;

				cin >> n1 >> n2;
				soma = n1 + n2;
				
				if(soma%2 == 0) printf("%s\n",dic["PAR"].c_str());			
				else printf("%s\n",dic["IMPAR"].c_str());

				dic.clear();
		}

		return 0;
}
