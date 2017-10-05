#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    ll resp = 1;
    for(int i = 0;i <n;++i){
        resp *= 3;
    }
    cout << resp << endl;

    return 0;
}
