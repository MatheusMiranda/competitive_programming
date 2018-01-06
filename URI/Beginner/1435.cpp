#include <bits/stdc++.h>

using namespace std;
int mat[101][101];

int main(){
  int n;
  while(cin >> n,n){
    for(int i = 0;i < n;++i){
      for(int j = 0;j < n;++j){
        if(i == 0 || i == n-1 || j == 0 || j == n-1){
          mat[i][j] = 1;
        }
        else mat[i][j] = min(n-i, min(i+1, min(n-j, j+1)));
      }
    }

    for(int i =0;i < n;++i){
      for(int j = 0;j < n;++j){
        printf("%3d", mat[i][j]);
      if (j < n - 1) printf(" ");
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}
