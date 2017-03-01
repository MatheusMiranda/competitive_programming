#include <iostream>
#include <vector>

using namespace std;

vector<int> vet;

int fl(){
   int s = vet.size(); 
   int ans = 0;
   vector<int> lis(s+1,1);
 
   for(int i = 1;i < s;++i){
      for(int j = 0;j < i;++j){
        if(vet[i] > vet[j]) lis[i] = max(lis[i],lis[j] + 1);
        ans = max(ans,lis[i]);
      }
   }  
      
  return ans;
}  

int main(){
  
  int n,a;
  cin >> n;
  int resp;

  while(n--){
    cin >> a;
    vet.push_back(a);
    resp = fl();
  }  

  cout << resp << endl;

  return 0;
}
