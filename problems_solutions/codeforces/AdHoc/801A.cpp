#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using par = pair<int,int>;

vector<int> vet;

int main(){

  string p;
  cin >> p;

  int cont = 0;
  int rep = 0;
  int contv =0;
  int contk =0;

  for(int i = 0;i < p.size();++i){
    if(i > 0 &&p[i] == 'K' && p[i-1] == 'V'){
      cont++;
      rep+=(contv - 1)/2;
      contv=0;
    }else if(p[i] == 'V'){
      contv++;
      if(p[i-1] == 'K'){
        rep+=contk/2;
        contk = 0;
      }
    }else{
      contk++;
    }
  }

  if(contk >= 2 || contv >= 2) rep++;

  if(rep > 0) cout << cont + 1 << endl;
  else cout << cont << endl;


  return 0;
}
