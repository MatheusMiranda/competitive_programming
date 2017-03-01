#include <iostream>
#include <string>

using namespace std;

int matrizona[41][41];
int vetAntigo[41];
int vetAtual[41];

int lcs(string p1,string p2){
    int m = p1.size();
    int n = p2.size();

    for(int i = 0;i <= m;++i ){
      for(int j = 0;j <= n;++j ){
        if(i == 0 || j == 0) matrizona[i][j] = 0;

        else if(p1[i - 1] == p2[j - 1]) matrizona[i][j] = 1 + matrizona[i-1][j-1];
    
        else matrizona[i][j] = max(matrizona[i][j-1],matrizona[i-1][j]);
      }
    }

    for(int i = 0;i <= m;++i ){
      for(int j = 0;j <= n;++j ){
        cout << matrizona[i][j] << " ";
      }
      cout << endl;
    }  
  
    return matrizona[m][n];
}  

int main(){
  
  string p1,p2;

  cin >> p1 >> p2;

  cout << lcs(p1,p2) << endl; 

  return 0;
} 
