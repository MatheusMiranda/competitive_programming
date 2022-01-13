#include <bits/stdc++.h>

using namespace std;

int main(){

  int n;

  while(scanf("%d", &n) != EOF){

    int x, y;
    vector<pair<int, int> > p;

    for(int i = n+1; i <= 2*n; i++){
      x = (n * i) / (i - n);
      if(!((n * i) % (i - n)))
        p.emplace_back(x, i);
    }

    printf("%d\n", p.size());
    for(auto pa : p)
      printf("1/%d = 1/%d + 1/%d\n", n, pa.first, pa.second);

  }

  return 0;
}
