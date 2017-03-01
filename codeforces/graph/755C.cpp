#include <iostream>
#include <cstring>
#include <set>

using namespace std;

#define MAX 10010

int pai[MAX];
int ranks[MAX];

set<int> vet;

int ap(int no){
  if(no != pai[no]) return pai[no] = ap(pai[no]);
  return no;
}  

void fu(int no1,int no2){
  int pai1 = ap(no1);
  int pai2 = ap(no2);

  if(ranks[pai1] > ranks[pai2]){
    ranks[pai1]++;
    pai[pai2] = pai1;
    pai[no2] = pai1;
  }else{
    ranks[pai2]++;
    pai[pai1] = pai2;
    pai[no1] = pai2; 
  }  
} 

int main(){

  int n,a;
  cin >> n;

  for(int i = 1;i <=n;++i) pai[i] = i;

  for(int i = 1;i <= n;++i){
    cin >> a;
    fu(i,a);
  }
  
  for(int i = 1;i <=n;++i){
    vet.insert(ap(pai[i]));
  }

  cout << vet.size() << endl;

  return 0;
}
