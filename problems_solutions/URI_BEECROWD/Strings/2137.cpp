#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string,int> dic;

int main(){
		
		int n;
		string codigo;

		while(cin >> n){
				while(n--){
					cin >> codigo;
					dic[codigo] = 1;
				}	


				for(auto it : dic){
						cout << it.first << endl;
				}
								
				dic.clear();		
		}	

		return 0;
}
