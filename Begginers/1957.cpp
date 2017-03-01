#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
				char val;
				char buffer[20];
				memset(buffer,'Z',sizeof buffer);
		
					cin >> val;
								sprintf ( buffer, "%#x", val );

								for(int i = 2;i < 20;++i){
										if(buffer[i] != 'Z')printf("%c",toupper(buffer[i]));
								}				

								printf("\n");
				return 0;
}
