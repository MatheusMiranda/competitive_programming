#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  string w;
  cin >> n;
  getchar();
  while(n--){
    getline(cin,w);

    for(int i=0;i<w.size();i++){
      if((w[i]>='A' && w[i]<='Z') || (w[i]>='a'&& w[i]<='z'))
        w[i] = w[i] + 3;
    }
  
    reverse(w.begin(),w.end());
  
    int half = w.size()/2;

    for(int i=half;i<w.size();i++){
      w[i] =  w[i] - 1;
    }

    cout << w << endl;
  }

  return 0;
}
