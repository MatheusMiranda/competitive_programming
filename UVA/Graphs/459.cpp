#include <iostream>
#include <cstring>
#include <set>
#include <string>

using namespace std;

#define MAX 30

int ranks[MAX];
int pai[MAX];
set<int> cont;

int acha_pai(int i){
  if(pai[i] != i) return pai[i] = acha_pai(pai[i]);
  return i;
} 

void faz_uniao(int a,int b){

  int paia = acha_pai(a);
  int paib = acha_pai(b);

  if(ranks[pai[a]] > ranks[pai[b]]){
    pai[paib] = paia;
    pai[b] = paia;
    ranks[paia]++;
  }else{
    pai[paia] = paib;
    pai[a] = paib;
    ranks[paib]++;
  }  

}  

int conv(char a){
  return a - 'A' + 1;
}   

int main(){

  int cases;
  char prim;
  string palavra;
  int t = 0;

  cin >> cases;
  while(cases--){

    cin >> prim;

    int qt = conv(prim);

    for(int i = 1;i <= qt;++i){
      pai[i] = i;
    }

    memset(ranks,0,sizeof ranks);

    getchar();
    while(1){
       getline(cin,palavra);
       if(palavra.empty()) break;
       faz_uniao(conv(palavra[0]),conv(palavra[1]));
    }
    
    string de2;
    string de20;

    for(int i = 1;i <= qt;++i){
      cont.insert(acha_pai(i));   
    }

    
    if(t++ > 0)cout << endl;
    cout << cont.size() << endl;
    cont.clear();
  }


  return 0;
}
