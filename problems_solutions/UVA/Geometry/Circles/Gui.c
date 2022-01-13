#include <stdio.h>
#include <stdlib.h>

int main(){
	char string[4];
	int i = 0, y = 0, x = 0;
	while(scanf("%c", &string[i]), string[i] != ' '){
		i++;
	}
	if(string[i] == ' ')
		scanf("%d", &y);
	x = atoi(string);
	printf("%d %d\n", x, y);
}
