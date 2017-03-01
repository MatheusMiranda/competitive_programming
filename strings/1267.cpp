#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
		
		map<char,int> dic;
		int n;
		string palavra;
		int n2;
		char letra;

		while(scanf("%d",&n),n){
				int contador = 0;
				int valor = 0;
				
				for(int i = 0;i < n;++i){
						cin >> letra >> n2 >> palavra;

						if(!dic[letra]) dic[letra] = 0;
						
						if(palavra == "incorrect") dic[letra] += 20;
						else if(palavra == "correct"){
									contador++;
									dic[letra] += n2;
									valor += dic[letra];
						}				

				}

				dic.clear();
				cout << contador << " " << valor << endl;
		}
		return 0;
}
