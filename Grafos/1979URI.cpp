#include <iostream>
#include <vector>
#include <cstring>
#include <sstream>

using namespace std;
#define MAX 110

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


    string linha;
    int n;

    scanf("%d",&n);
    while(n != 0){

        memset(cores,-1,sizeof cores);
        int id,x;

        for(int i = 0;i < n;++i){

            scanf("%d",&id);
            getchar();
            getline(cin,linha);
            stringstream ss(linha);
            while (ss >> x){
                vetorzao[id].push_back(x);
                vetorzao[x].push_back(id);
            }
        }

        dfs(1,0);

        printf("%s\n",bicolorivel?"SIM":"NAO");

        bicolorivel = true;

        for(int l = 0;l <= n;++l){
            vetorzao[l].clear();
        }

        scanf("%d",&n);

    }




  return 0;
}
