#include <bits/stdc++.h>

using namespace std;

map<int,int> dic;

int main(){
  
  int n;
  scanf("%d",&n);
  int a;

  for(int i = 0;i < n;++i){
    scanf("%d",&a);
    dic[a]++;
  }

  int flag = true;

  for(auto el : dic){
    if(el.second > (n+1)/2) flag = false;
  }

  if(flag) printf("YES\n"); 
  else printf("NO\n");

  return 0;
}
