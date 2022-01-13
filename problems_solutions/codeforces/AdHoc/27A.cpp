#include <bits/stdc++.h>

using namespace std;

int vet[3100];

int main(){
  int n;
  cin >> n;
  int a;

  while(n--){
    cin >> a;
    vet[a] = 1;
  }

  for(int i = 1;i<=3000;++i){
    if(!vet[i]){
      cout << i << endl;
      break;
    }

    if(i == 3000) cout << 3001 << endl;
  }


  return 0;
}
