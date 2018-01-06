#include <bits/stdc++.h>

using namespace std;
char matrizona[9][9];
set<int> col;
set<int> lin;

int main(){
  char pos;

  for(int i  =0;i < 8;++i){
    for(int j = 0;j < 8;++j){
      cin >> matrizona[i][j];
    }
  }

  int l = 0;
  for(int i  =0;i < 8;++i){
    int cont = 0;
    for(int j = 0;j < 8;++j){
      if(matrizona[i][j] == 'B') cont++;
    }
    if(cont == 8) l++;
  }

  int c = 0;
  for(int j  =0;j< 8;++j){
    int cont2 = 0;
    for(int i = 0;i < 8;++i){
      if(matrizona[i][j] == 'B') cont2++;
    }
    if(cont2 == 8) c++;
  }

  if(l + c == 16) cout << 8 << endl;
  else cout << l + c << endl;

  return 0;
}
