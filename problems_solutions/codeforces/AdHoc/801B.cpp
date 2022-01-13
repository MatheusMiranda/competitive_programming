#include <bits/stdc++.h>

using namespace std;

int main(){
  
  string x,y,z;
  string vaz = "";

  cin >> x >> y;

  bool flag = true;

  for(int i =0;i < x.size();++i){
    if(x[i] == y[i]) vaz+= x[i];
    else if(x[i] < y[i]){
      flag = false;
      break;
    }
    else vaz+= y[i];
  }

  if(flag == false) printf("-1\n");
  else cout << vaz << endl;

  return 0;
}
