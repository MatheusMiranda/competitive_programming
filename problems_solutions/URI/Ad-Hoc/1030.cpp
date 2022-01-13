#include <bits/stdc++.h>

using namespace std;
#define MAX 10003
int vet[MAX];

int solve(int n, int k)
{
  if (n == 1)
    return 1;
  else
    return (solve(n - 1, k) + k-1) % n + 1;
}


int main(){
  int n;
  int a,b;
  int cas = 0;
  scanf("%d",&n);
  while(n--){
    scanf("%d %d",&a,&b);
    printf("Case %d: %d\n",++cas,solve(a,b));
  }

  return 0;
}
