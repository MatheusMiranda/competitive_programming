#include <string>
#include <iostream>
#include <map>

using namespace std;

int main(){

			map<char,int> dic;

			dic['0'] = 6; 
			dic['1'] = 2;
			dic['2'] = 5;
			dic['3'] = 5;
			dic['4'] = 4;
			dic['5'] = 5;
			dic['6'] = 6;	
			dic['7'] = 3;
			dic['8'] = 7;
			dic['9'] = 6;

			int n;
			cin >> n;
			string palavra;
			int soma;

			while(n--){
					cin >> palavra;
					soma = 0;
					for(int i = 0;i < palavra.size();++i){
								soma += dic[palavra[i]];
					}

					cout << soma << " leds" << endl;
			}
			return 0;
}
