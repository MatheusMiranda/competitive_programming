#include <iostream>
#include <string>


using namespace std;

int main(){

		string p1,p2,p3;
		char n1;

		while(1){
				cin >> n1 >> p1;
				p2 = "";
				p3 = "";

				if(n1 == '0' && p1 == "0")break;
			
				for(int i = 0;i < p1.size();++i){
						if(p1[i] == n1) continue;
						else p2+= p1[i];
				}
			
				int flag = 0;

				if(p2.size() == 0) printf("0\n");
				else if(p2.size() == 1)printf("%c\n",p2[0]);				
				else{
						for(int i = 0;i < (p2.size());++i){
								if(p2[i] == '0')continue;
								else {
									flag = 1;
									for(int k = i; k < p2.size();++k){			
										printf("%c",p2[k]);		
									}
									printf("\n");
									break;
								}				
						}

						if(flag == 0)	printf("0\n");
				}
		
		}

		return 0;
}
