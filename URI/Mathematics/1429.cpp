#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll n;
    int fat[6] = {0,1,2,6,24,120};
    while(cin >> n,n){
       ll sum = 0;
       int fator = 1;
       while(n){
         sum += n%10 * fat[fator];
         n/=10;
         fator++;
       }
       cout << sum << endl;
    }

    return 0;
}
