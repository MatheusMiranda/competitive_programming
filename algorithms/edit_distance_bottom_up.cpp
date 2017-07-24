#include <iostream>
#include <vector>
#include <string>

using namespace std;

string p1,p2;

int dp[100][100];

int ed(){

  int m = p1.size();
  int n = p2.size();

  for(int i = 0;i <= m;++i){
    for(int j = 0;j <= n;++j){
      
      if(i == 0) dp[i][j] = j;
      
      else if(j == 0) dp[i][j] = i;

      else if(p1[i-1] == p2[j-1]) dp[i][j] = dp[i-1][j-1];
      
      else dp[i][j] = 1 + min(min(dp[i][j-1],dp[i-1][j]),dp[i-1][j-1]);

    }
  }
    
  for(int i = 0;i <= m;++i){
    for(int j = 0;j <=n;++j){
      cout << dp[i][j] <<" ";
    }
    cout << endl;
  }

  return dp[m][n];
}

int main(){
    
  cin >> p1 >> p2;
  
  cout << ed() << endl;  
  
  return 0;
}
