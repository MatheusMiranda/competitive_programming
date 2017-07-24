#include <bits/stdc++.h>

using namespace std;

#define MAX 1 << 30

vector<int> vet;

int cc(int value){

    vector<int> val(value+1,MAX);   

    val[0] = 0;
    int s = vet.size();
    
    for(int i = 1;i <= value;++i){
      for(int j  = 0;j < s;++j){
          if(vet[j] <= i){
            int res = val[i - vet[j]];
            if(res != MAX && val[i] > 1 + res){
              val[i] = 1 + res;
            }
          }
      }
    }

    return val[value];
}

int main(){
  
  int n;
  cin >> n;
  int a;  

  while(n--){
    cin >> a;
    vet.push_back(a);
  }
  
  int value;
  cin >> value;

  int resp = cc(value);

  cout << resp << endl;
 
  return 0;
}
