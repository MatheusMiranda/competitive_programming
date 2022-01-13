#include <iostream>
#include <vector>

using namespace std;

vector<int> vetorzao[1010];
int vet[1010];

int main(){

  int n,m;
  int a,b;
  cin >> n >> m;

  while(m--){
    cin >> a >> b;
    vet[a] = 1;
    vet[b] = 1;
  } 
  int g;
  for(int i = 1;i <= n;++i){
    if(vet[i] != 1){
      g = i;
      break;
    }  
  }

  cout << n - 1 << endl;
  for(int i = 1;i <= n;++i){
   if(i == g) continue;
   printf("%d %d\n",g,i);
  }  

  return 0;
}
