#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string,int> dic;

int main(){
		
				int n;
				string nome;
				int mat;
				while(cin >> n){
								while(n--){

												cin >> mat >> nome;
												if(nome != "EPR" && nome != "EHD") nome = "INTRUSOS";
												if(!dic[nome]) dic[nome] = 1;
												else dic[nome]++;				

								}
												printf("EPR: %d\n",dic["EPR"]);
												printf("EHD: %d\n",dic["EHD"]);
												printf("INTRUSOS: %d\n",dic["INTRUSOS"]);

												dic.clear();
				}

		return 0;
}
