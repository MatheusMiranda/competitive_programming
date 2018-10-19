#include <bits/stdc++.h>

using namespace std;

int pos[100090];
int per[100090];
vector<int> vet2;

int main(){
  int n,a;

  cin >> n;

  memset(per, -1, sizeof per);

  while(n--){
    cin >> a; 
    vet2.push_back(a);
  }

  int cont = 0;

  for(int i = 1;i <= vet2.size();++i){
    int period = i - pos[vet2[i-1]];

    if(per[vet2[i-1]] == -1){
       per[vet2[i-1]] = 0;
    }
    else if(per[vet2[i-1]] == 0){
       per[vet2[i-1]] = period;
    }
    else{
      if(per[vet2[i-1]] != period) per[vet2[i-1]] = -3; 
    }
  
    pos[vet2[i-1]] = i;
  }

  for(int i = 1;i <= 100005;++i){
    if(per[i] != -1 && per[i] != -3){
      cont++;
    } 
  }

  printf("%d\n",cont);

  for(int i = 1;i <= 100005;++i){
    if(per[i] != -1 && per[i] != -3){
      printf("%d %d\n",i,per[i]);
    } 
  }

  return 0;
}
