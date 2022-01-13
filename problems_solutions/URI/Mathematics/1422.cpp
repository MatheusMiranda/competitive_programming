#include <bits/stdc++.h>

using namespace std;

long long mod = 13371337;
int t1,t2,t3,t4;

void multiply(int m[2][2],int m2[2][2]){

  long long x1 = (m[0][0] * m2[0][0]) + (m[0][1] * m2[1][0]);
  long long x2 = (m[0][0] * m2[0][1]) + (m[0][1] * m2[1][1]);
  long long x3 = (m[1][0] * m2[0][0]) + (m[1][1] * m2[1][0]);
  long long x4 = (m[1][0] * m2[0][1]) + (m[1][1] * m2[1][1]);

  m[0][0] = x1 % mod;
  m[0][1] = x2 % mod;
  m[1][0] = x3 % mod;
  m[1][1] = x4 % mod;    

}

long long fe(long long expo){

  int res[2][2] = {{1,0},{0,1}};
  int base[2][2] = {{2,-1},{1,0}};

  base[0][0] = base[0][0] % mod;
  base[0][1] = base[0][1] % mod;
  base[1][0] = base[1][0] % mod;
  base[1][1] = base[1][1] % mod;    

  while(expo > 0){  
    
    if(expo & 1){

      multiply(res,base);

      res[0][0] = res[0][0] % mod;
      res[0][1] = res[0][1] % mod;
      res[1][0] = res[1][0] % mod;
      res[1][1] = res[1][1] % mod;    
    }

    expo = expo >> 1;
    multiply(base,base);
    base[0][0] = base[0][0] % mod;
    base[0][1] = base[0][1] % mod;
    base[1][0] = base[1][0] % mod;
    base[1][1] = base[1][1] % mod;    
    
  }

  cout << res[0][0] << endl;
  cout << res[0][1] << endl;
  cout << res[1][0] << endl;
  cout << res[1][1] << endl;

  long long ans = (res[0][0] * t4) + (res[0][1] * t1);
  return ans % mod;
 
}

int main(){
  
  long long n;
  while(scanf("%lld",&n),n){

    cin >> t1 >> t2 >> t3 >> t4;
    t4 = t4 + t3 + t2 + t1;

    long long resp = fe(n - 4);
    cout << resp << endl;

  }


  return 0;
}
