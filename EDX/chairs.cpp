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

    double a,b,c;
    cin >> a >> b >>c;

    double d1;
    
    d1 = a /2.0 + b /2.0 + c/2.0;

    cout << fixed  << setprecision(6)<<d1 / 3.0 << endl;

    return 0;
}

