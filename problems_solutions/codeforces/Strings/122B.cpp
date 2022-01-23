#include <bits/stdc++.h>

using namespace std;

map<int,int> dic;

int main(){

  string a;
  cin >> a;

  for(auto el : a){
    dic[el]++;
  }

  if(dic['4'] == 0 && dic['7'] == 0){
    printf("-1\n");
  }else if(dic['4'] && dic['7'] == 0){
    printf("4\n");
  }else if(dic['7'] && dic['4'] == 0){
    printf("7\n");
  }else{
    printf("%d\n",dic['4'] >= dic['7']?4:7);
  }

  return 0;
}
