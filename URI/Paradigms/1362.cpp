#include <iostream>
#include <cstring>
#include <string>
#include <map>

using namespace std;

int dp[38][3];
int matrizona[38][2];

map<string,int> dic;

dic["XXL"] = 1;
dic["XL"] = 2;
dic["L"] = 3;
dic["M"] = 4;
dic["S"] = 5;
dic["XS"] = 6;

int n,m,t;

int main(){

  scanf("%d",t);
  string tam1,tam2;

  while(t--){
    scanf("%d %d",&n,&m);

    for(int i = 0;i < m;++i){
       cin << tam1 << tam2;
       matrizona[dic[tam1]][dic[tam2]] =  
    }

  }

  return 0;
}
