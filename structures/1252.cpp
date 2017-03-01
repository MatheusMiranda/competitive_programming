#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> vetor;

int modulo[10100];

void func(int n1,int n2){
			
			if(modulo[n1] == modulo[n2])	
						
					
			return n1 < n2;
}				

int main(){
	
		int n,m;
		int num;

		while(scanf("%d %d",&n,&m),n | m){
				while(n--){
						cin >> num;
						vetor.push_back(num);
						modulo[num] = num % 3;
				}

				sort(vetor.begin(),vetor.end(),func);
		}

		return 0;
}
