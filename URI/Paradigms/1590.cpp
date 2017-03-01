#include <bits/stdc++.h>

using namespace std;

vector<int> vet,cands;
int main(){

  int t;
  cin >> t;
  int n,m;
  int a;

  while(t--){

    cin >> n >> m;

    while(n--){
      cin >> a;
      vet.push_back(a);
    }

    int ans = 0;

    for(int i = 30;i >= 0;++i){
      int cont = 0;

      for(int i = 0;i < vet.size();++i){
        if(vet[i] & aux){
          cont++; 
          cands.push_back(i);
        }
      }


        int num = vet[cands[0]];
      if(cands.size() >= m){

        for(int i = 1; i < cands.size();++i){
          num &= vet[cands[i]];
        }

        ans = max(ans,num);

      }

      cands.clear();
    }



    cout << ans << endl;

  }

  return 0;
}
