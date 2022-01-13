#include <bits/stdc++.h>

using namespace std;

bitset<1000000 + 1> bs;

int main(){
  
  for(int i = 1;i <= 1000000;++i){
    if(!bs[i]) printf("%d\n",i);
    long long sum = i,aux = i;    
    while(aux){
      sum += aux % 10;
      aux /= 10;
    }
    bs[sum] = 1;
  }

  return 0;
}
