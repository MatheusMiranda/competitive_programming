#include <iostream>
#include <string>

using namespace std;

int main(){
		
		string palavra ("LIFE IS NOT A PROBLEM TO BE SOLVED");

		int n;

		cin >> n;

		for(int i = 0;i < n;++i){
			cout << palavra[i];
		}

		printf("\n");

		return 0;
}
