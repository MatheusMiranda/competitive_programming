#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

#define MAX 1010

vector<int> vetorzao[MAX];
int cores[MAX];
bool bicolorivel = true;

void dfs(int no,int cor){

	if(not bicolorivel) return;

	cores[no] = cor;

	for(auto it : vetorzao[no]){

		if(cores[it] == -1){
			dfs(it,1 - cor);
		}else if(cores[it] == cores[no]){
			bicolorivel = false;
			break;
		}

	}

}

int main(){

	int n;
	scanf("%d",&n);
	int dialeto;

	memset(cores,-1,sizeof cores);

	for (int i = 1; i <= n; ++i)
	{
		for(int j = 1;j <= n;++j){

			scanf("%d",&dialeto);
			if(dialeto == 0){
				vetorzao[i].push_back(j);
				vetorzao[j].push_back(i);
			}

		}
	}

	dfs(1,0);

	printf("%s\n",bicolorivel?"Bazinga!":"Fail!");

	return 0;
}
