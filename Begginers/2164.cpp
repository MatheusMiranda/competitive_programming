#include <iostream>
#include <cmath>

using namespace std;

int main(){

		float n;
		cin >> n;

		float result = (pow(((1.0	+ sqrt(5.0))/2.0),n) - pow(((1.0 - sqrt(5.0))/2.0),n))/ sqrt(5.0);

		printf("%.1f\n",result);

		return 0;
}


