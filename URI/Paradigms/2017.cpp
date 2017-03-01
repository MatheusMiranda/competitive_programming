#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> vet;

int alter;

int ed(string p1,string p2){

  int cont = 0;
  int m = p1.size();
  for(int i = 0;i < m;++i){
    if(p1[i] != p2[i]) cont++;
  }

  return cont;
}

int main(){

  string p,p2;
  cin >> p;
  int k;
  scanf("%d",&k);

  for(int i = 0;i < 5;++i){
    cin >> p2;
    vet.push_back(p2);
  }
  
  int min = 1<<30;
  int ind,res;

  for(int i = 0;i < vet.size();++i){
    res = ed(p,vet[i]);

    if(res < min){
      min = res;
      ind = i;
    }
  }

  if(min < k){
     printf("%d\n%d\n",ind+1,min);
  }
  else printf("-1\n");

  return 0;
}
