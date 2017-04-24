#include <bits/stdc++.h>
#include <map>

using namespace std;

vector<int> vet;

map<int,int> dic;

int main(){
  
  int n;
  scanf("%d",&n);
  int a;

  while(n--){
    scanf("%d",&a);
    vet.push_back(a);
  }
  
  sort(vet.begin(),vet.end());  

  int b =  vet.size();

  int max = abs(vet[b-1] - vet[0]);
  
  for(int i = 1;i < b;++i){
    int num = vet[i] - vet[i-1];
    if(num < max){
      max = num;
    }
    dic[num]++; 
  }

  printf("%d %d\n",max,dic[max]);

  return 0;
}
