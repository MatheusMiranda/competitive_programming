#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <math.h>
#include <iomanip>

using namespace std;

vector<int> v1,v2,v3;

int main() {
    #ifdef JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    #endif

    ios::sync_with_stdio(false);

    int n;
    for(int i  =0;i < 3;++i){
      cin >> n;
      v1.push_back(n);
    }
    for(int i  =0;i < 3;++i){
      cin >> n;
      v2.push_back(n);
    }
    for(int i  =0;i < 3;++i){
      cin >> n;
      v3.push_back(n);
    }
       

    double max = 0.0000000000;

    for(int i = 0;i < 3;++i)  
      for(int j = 0;j < 3;++j)  
        for(int k = 0;k < 3;++k){
          if(i == j || i == k || j == k) continue;
            int num = v1[i] * v1[i] + v2[j] * v2[j] + v3[k] * v3[k];
            double res = sqrt(num);
          if(res > max){
            max = res;
          }
        }
   
    cout << fixed << setprecision(6) <<max << endl;

    return 0;
}

