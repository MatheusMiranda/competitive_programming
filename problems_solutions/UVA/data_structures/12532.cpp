#include <bits/stdc++.h>

using namespace std;

#define N 100010
int n;  // array size
int t[4 * N];

int get_val(int a){
  if(a < 0) return -1;
  else if(a > 0) return 1;
  else return 0;
}

void build() {  // build the tree
  for (int i = n - 1; i > 0; --i){
    int a = t[i<<1] * t[i<<1|1]; 
    t[i] = get_val(a);
  }
}

void modify(int p, int value) {  // set value at position p
  int a = get_val(value);
  for (t[p += n] = a; p > 1; p >>= 1) t[p>>1] = t[p] * t[p^1];
}

int query(int l, int r) {  // sum on interval [l, r)
  int res = 1;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l&1) res *= t[l++];
    if (r&1) res *= t[--r];
  }
  return res;
}

int main() {
  int k;
  char letra;
  int v1,v2;
  while(scanf("%d %d", &n,&k)!= EOF){
    for (int i = 0; i < n; ++i){
      int aux;
      scanf("%d", &aux);
      t[n+i] = get_val(aux);
    }
    build();

    while(k--){
      cin >> letra;
      cin >> v1 >> v2;
      if(letra == 'C'){
        modify(v1 - 1, v2);
      }else if(letra == 'P'){
        int resp;
        resp = query(v1-1,v2);
        if(resp < 0) cout << '-';
        else if(resp > 0) cout << '+';
        else cout << '0';
      }
    }
    cout << endl;
  }
  return 0;
}
