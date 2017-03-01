#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int sumMAx(vector<int> vetor,int custo){

  int n = vetor.size();
  int somaMax = 0;
  int max = 0;

  for (int i = 0; i < n; ++i)
  {
    max+=(vetor[i] - custo);

    if(max < 0)
      max = 0;
    if(somaMax < max)
      somaMax = max;

  }
    return somaMax;

}

int main(){

  int numero,custo,n,soma;
  vector<int> vetor;

  while(scanf("%d",&numero) != EOF){

    scanf("%d",&custo);
    for (int i = 0; i < numero; ++i)
    {
      scanf("%d",&n);
      vetor.push_back(n);
    }

    soma = sumMAx(vetor,custo);
    printf("%d\n",soma);
    vetor.clear();

  }

  return 0;
}
