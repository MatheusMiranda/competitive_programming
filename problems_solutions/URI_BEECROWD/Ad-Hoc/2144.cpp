#include <iostream>
#include <vector>

using namespace std;

int main(){

		int w1,w2,r;
		double m;
		double soma = 0;
		int contador =0;

		while(scanf("%d %d %d",&w1,&w2,&r), w1 | w2 | r){
						
				double m1 = w1 * (1.0 + (r/30.0));
				double m2 = w2 * (1.0 + (r/30.0));
				double m = (m1 + m2)/2.0;
			
				soma += m;
				contador++;

				if(m < 13) cout << "Nao vai da nao" << endl;
				else if(m < 14) cout << "E 13"<< endl;		
				else if(m < 40) cout << "Bora, hora do show! BIIR!" << endl;
				else if(m <= 60) cout << "Ta saindo da jaula o monstro!" << endl;
				else cout << "AQUI E BODYBUILDER!!" << endl;

		}	

		if(soma/(double)contador > 40) printf("\nAqui nois constroi fibra rapaz! Nao e agua com musculo!\n");

		return 0;
}		
