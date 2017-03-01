#include <iostream>

using namespace std;

int matrizona[520][520];

int main(){
		
		int n,d;
		int numero;
		int flag = 1;
		
		while(scanf("%d %d",&n,&d),n | d){

						for(int i = 0;i < d;++i){
								for(int j = 0;j < n;++j){	
										cin >> matrizona[i][j];
								}
						}				

						for(int i = 0;i < d;++i){
										flag = 1;
										for(int j = 0;j < n;++j){
														if(matrizona[i][j] == 0){
																		flag = 0;
																		break;
														}				
										}

										if(flag == 1){
														printf("yes\n");
														break;
										}	
						}	
						if(flag == 0) printf("no\n");

		}		

					
		return 0;
}
