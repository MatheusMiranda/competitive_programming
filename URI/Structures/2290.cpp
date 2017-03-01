#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using par = pair<int,int>;

map<int,int> dic;
vector<par> vet;

int main(){
  
  int n;

  while(scanf("%d",&n),n){
    int a = n;
    int r;
    while(a--){
      scanf("%d",&r);
      
      if(dic[r]!=-1)dic[r]+=1;
      if(dic[r] > 1){
        dic[r] = -1;
        continue;
      }
      
    }

    sort(vet.begin(),vet.end());

    for(auto at : vet){
      cout << " " << at.first << " " << at.second << endl;
    }

    cout << endl << endl << endl;

    //printf("%d %d\n",vet[0].second,vet[1].second);

    vet.clear();
    dic.clear();
  }  


  return 0;
}
