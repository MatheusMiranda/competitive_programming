#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;

int carry[11];

int main(){
		
		string n,m;

		while(cin >> n >> m){
				if(n == "0" && m == "0") break;

				memset(carry,0,sizeof carry);

				int a = n.size();
				int b = m.size();
				int maior	= max(a,b);
				int menor = min(a,b);

				int eq = maior - menor;

				if(a>b) m.insert(0,eq,'0');
				if(b>a)	n.insert(0,eq,'0');


				int v1,v2;
				int soma,contador = 0;
				for(int i = maior - 1;i >= 0;--i){
						
						v1 = n[i] - 48;
						v2 = m[i] - 48;
						soma = v1 + v2 + carry[i];

						if(soma >= 10){
								if(i >= 1)carry[i - 1] = soma/10;			 
								contador ++;
						}
				}
				
				if(contador == 0) cout << "No carry operation." << endl;
				else if(contador == 1) cout << contador << " carry operation." << endl; 
				else cout << contador << " carry operations."  << endl;
	
		}

		return 0;
}
