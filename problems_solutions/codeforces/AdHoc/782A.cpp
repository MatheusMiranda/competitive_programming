#include <bits/stdc++.h>

using namespace std;

map<long long,long long> dic;

int main(){
  
  long long n;
  cin >> n;
  long long a;
  long long maior = -1;
  long long cont = 0;

  for(long long i =0;i < 2 * n;++i){
    cin >> a;
    cont++;
    if(dic[a]){
       cont--;
       if(cont > maior){
          maior = cont;
       }
       cont--; 
    }    

    dic[a] = 1; 
  }  


  cout << maior << endl;   

  return 0;
}
