#include <bits/stdc++.h>

using namespace std;

int occurrences_counter[10];

int main(){
  
  int n,a;
  cin >> n;

  while(n--){
    memset(occurrences_counter, 0, sizeof occurrences_counter);

    cin >> a;

    for(int i = 0;i <= a;++i){
      int num = i;
      while(num){
        ++occurrences_counter[num % 10];
        num /= 10;
      }
    }
  
    int ct = 0;
    for(auto el : occurrences_counter){
      if(ct++) cout << " " <<el;
      else cout << el;
    }

    cout << endl;
  }  

  return 0;
}
