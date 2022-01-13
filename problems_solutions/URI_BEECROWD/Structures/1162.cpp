#include <bits/stdc++.h>

using namespace std;
vector<int> vet;

int main(){
  int n,a,c;
  cin >> n;

  while(n--){
    scanf("%d",&a);
    while(a--){
      scanf("%d",&c);
      vet.push_back(c);
    }

    bool flag;
    int cont = 0;
    for(int i  =0;i < vet.size();++i){
      flag = false;
      for(int j = 0;j < vet.size() - 1;++j){
         if(vet[j] > vet[j + 1]){
            int aux = vet[j+1];
            vet[j+1] = vet[j];
            vet[j] = aux;
            cont++;
            flag = true;
         }
      }
      if(!flag) break;
    }
    
    printf("Optimal train swapping takes %d swaps.\n",cont);
    vet.clear();
  }

  return 0;
}
  
