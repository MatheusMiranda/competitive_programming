#include <iostream>
#include <cmath>

#define G 9.80665
#define PI 3.14159

using namespace std;

int main(){
		
		double height;
		int begin,end;
		int tries;
		double angle,speed;
		double range;

		while(scanf("%lf",&height) != EOF){
				cin >> begin >> end;
				cin >> tries;
					
				while(tries--){
					scanf("%lf %lf",&angle,&speed);
					double a = (angle * PI/180.00000);

					double indegrees = sin(2.00000 * angle);
					range = (2.00000 * (speed * speed) * sin(a) * cos(a))/ G;
			
					if(range >= begin && range <= end) printf("%.5lf -> DUCK\n",range);
					else printf("%.5lf -> NUCK\n",range);
				}
		}

		return 0;
}
