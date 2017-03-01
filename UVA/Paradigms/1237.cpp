#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;
using par = pair<int,int>;

vector<string> mcs;
vector<par> pcs;

int main(){

  int caso = 0;
  int t,a,q,l,h;
  scanf("%d",&t);
  string nome;

  while(t--){
    if(caso++) printf("\n");
    scanf("%d",&a);

    while(a--){
        cin >> nome;
        mcs.push_back(nome);
        scanf("%d %d",&l,&h);
        pcs.push_back(make_pair(l,h));
    }

    int price;
    scanf("%d",&q);
    int conta;
    int resp;

    while(q--){
        cin >> price;  
        conta = 0;
        
        for(int i = 0;i < pcs.size();++i){
            if(price >= pcs[i].first && price <= pcs[i].second ){
              resp = i;
              conta++;
            }
            if(conta == 2) break;
        } 

        if(conta == 2 || conta == 0) printf("UNDETERMINED\n");  
        else printf("%s\n",mcs[resp].c_str()); 

    }
    
    mcs.clear();
    pcs.clear();
    
  }
    
  return 0;
}
