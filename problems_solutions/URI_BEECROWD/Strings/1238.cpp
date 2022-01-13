#include <string>
#include <iostream>

using namespace std;

int main(){
	
		int n;

		cin >> n;

		while(n--){

						string p1,p2,palavrao;
						string nova;

						cin >> p1 >> p2;	

						int t = p1.size();
						int t2 = p2.size();

						if(t > t2){
										palavrao = p1;
						}else{
										palavrao = p2;
						}				

						int tam = max(t,t2);
						int menor = min(t,t2);

						int contador1 = 0;
						int contador2 = 0;

						while(menor--){
										nova+= p1[contador1++];
										nova+= p2[contador2++];
						}

						int nc = min(contador1,contador2);

						for(int i = nc;i < tam;++i){
										nova += palavrao[i];
						}						

						cout << nova << endl;

		}	

		return 0;
}
