#include <iostream>

using namespace std;

int main(){

			int n,vel,maior = -1;

			while(scanf("%d",&n) != EOF){
					
					while(n--){
						cin >> vel;
						if(vel > maior) maior = vel;
					}

					if(maior >= 20) printf("3\n");
					else if(maior >= 10) printf("2\n");
					else printf("1\n");

					maior = -1;
			}

			return 0;
}
