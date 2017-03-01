#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(){

  int casos;
  int tamanho,n1,n2,soma = 0;
  vector<int> v1;
  vector<int> v2;


  scanf("%d",&casos);

  for (int i = 0; i < casos; ++i)
  {
    scanf("%d",&tamanho);
    for (int l = 0; l < tamanho; ++l)
    {
      scanf("%d",&n1);
      v1.push_back(n1);
    }
    for (int m = 0; m < tamanho; ++m)
    {
      scanf("%d",&n2);
      v2.push_back(n2);
    }

    for (int t = 0; t < tamanho; ++t)
    {
      soma += (v1[t] * v2[t]);
    }

    if(soma == 0){
      printf("Caso #%d: reto\n",i + 1);
    }else if(soma > 0){
      printf("Caso #%d: agudo\n",i + 1);
    }else{
      printf("Caso #%d: obtuso\n",i + 1);
    }

    soma = 0;
    v1.clear();
    v2.clear();

  }




  return 0;
}
