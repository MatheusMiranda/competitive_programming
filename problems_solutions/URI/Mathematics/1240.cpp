#include <iostream>
#include <string>

using namespace std;

int main(){
		
		int n;
		string a,b;

		cin >> n;

		while(n--){
			cin >> a >> b;

			int t1 = a.size();
			int t2 = b.size();

			int menor = min(t1,t2);
			int desl = max(t1,t2) - menor;

			//cout << "desl" << desl << endl;

			int contador = 0;

			for(int i = menor - 1;i >= 0;--i){
				
						if(a[i + desl] == b[i]) contador++;
						else break;
			}

			if(contador == menor) printf("encaixa\n");
			else printf("nao encaixa\n");			
	
		}

		return 0;
}
