#include <iostream>
#include <cstring>
#include <vector>
#include <map>

using namespace std;

#define MAX 200010

int ranks[MAX];
int pai[MAX];
vector<int> meia;

int acha_pai(int no){
  if(no != pai[no]) return pai[i] = acha_pai(pai[i]);
  return i;
}

map<int,int> dic;

void une(int n1,int n2){
    
    int pai1 = acha_pai(n1);
    int pai2 = acha_pai(n2);

    if(ranks[pai1] > ranks[pai2]){
        pai[pai2] = pai1;
        pai[n2] = pai1;
        ranks[pai1]++;
    }else{
        pai[pai1] = pai2;
        pai[n1] = pai2;
        ranks[pai2]++;
    }  

}  

int main(){

  int n,m,k;

  scanf("%d %d %d",&n,&m,&k);

  for(int i  = 1; i <= n;++i){
    pai[i] = i; 
  } 

  for(int i = 1;i <= n;++i){
    scanf("%d",&meia[i]);
  }  
  
  int m1,m2;

  for(int i = 0; i < m;++i){
    scanf("%d %d",&m1,&m2);
    if(pai[m1] != pai[m2]) une(m1,m2);
  }  
  
  for(int i = 1;i <=n;++ i){
    
     
  
  }   

  return 0;
}
