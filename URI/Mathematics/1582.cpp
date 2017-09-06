#include <iostream>
#include <cmath>

int mdc(int a,int b){
			return (!b) ? a : mdc(b,a % b);
}				

int main(){

		int a,b,c;

		while(scanf("%d %d %d",&a,&b,&c) != EOF){
					
				int hip;
				int c1,c2;

				if(a > b && a > c){
							 	hip = a;
								c1 = b;
								c2 = c;
				}				
				else if(b > a && b > c){
							 	hip = b;
								c1 = a;
								c2 = c;
				}				
				else{
							 	hip = c;
								c1 = a;
								c2 = b;										
				}

				if(pow(hip,2) == (pow(c1,2) + pow(c2,2))){
						if(mdc(hip,c1) == 1 && mdc(hip,c2) == 1){
								printf("tripla pitagorica primitiva\n");				
						}else{
								printf("tripla pitagorica\n");
						}				
				}else{	
						printf("tripla\n");
				}				

		}				

		return 0;
}
