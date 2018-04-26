#include <bits/stdc++.h>

using namespace std;
#define MAX 10001

map<int, vector<int> > dic;

int main(){
  int a,b,c;

  while(cin >> a >> b){

    for(int i = 1;i <= a;++i){
      cin >> c;
      dic[c].push_back(i);
    }
  
    int d,e;
    while(b--){
      cin >> d >> e;
      if(dic[e].size() >= d){
        cout << dic[e][d-1] << endl;
      }else{
        cout << 0 << endl;
      }
    }

    dic.clear();
  }

  return 0;
}
