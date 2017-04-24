#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> v1,v2;
using par  = pair<int,int>;

int main() {
    #ifdef JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    #endif

    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    long long t;
    
    for(int i = 0;i < n;++i){
        cin >> t;
        v1.push_back(t);
    }

    for(int i = 0;i < n;++i){
        cin >> t;
        v2.push_back(t);
    }

    long long soma = 0;
    int c1 = 0,c2 = 0;
    par m;
    int menor = 1 << 30;

    for(int i = 0;i < n;++i){
      if(v1[i] > v2[i]){
        c1++;
        soma+=v1[i];
      }else{
        c2++;
        soma+=v2[i];
      }

        if(abs(v1[i] - v2[i]) < menor){
        menor = abs(v1[i] - v2[i]);
        m.first = v1[i];
        m.second = v2[i];
      }
    }

    if(c1 == 0){
      soma -= m.second;
      soma += m.first;
    }else if(c2 == 0){
      soma -= m.first;
      soma += m.second;
    }   

    cout << soma << endl;

    return 0;
}

