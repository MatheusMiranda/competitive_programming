#include <bits/stdc++.h>

using namespace std;
map<int,int> dic;

int main(){
  int a,b;

  while(cin >> a >> b,a|b){
    int cont = 0;
    int aux;

    while(a--){
      scanf("%d",&aux);
      dic[aux]++;
    }
    while(b--){
      scanf("%d",&aux);
      dic[aux]++;
    }

    for(auto el : dic){
      if(el.second >= 2) cont++;
    }

    cout << cont << endl;

    dic.clear();
  }

  return 0;
}
