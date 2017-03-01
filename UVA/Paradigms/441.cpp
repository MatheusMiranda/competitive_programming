#include <iostream>
#include <vector>

using namespace std;

vector<int> vetor;

int main(){

  int k;
  int cont = 0;
  while(scanf("%d",&k),k){

    vetor.assign(15,0);
    for(int i = 0;i < k;++i)
      scanf("%d",&vetor[i]);

    if(cont > 0) printf("\n");
    for(int i = 0;i < k - 5;++i)
      for(int j = i + 1;j < k - 4;++j)
        for(int a = j + 1;a < k - 3;++a)
          for(int b = a + 1;b < k - 2;++b)
            for(int c = b + 1 ;c < k - 1;++c)
              for(int d = c + 1;d < k;++d)
                printf("%d %d %d %d %d %d\n",vetor[i],vetor[j],vetor[a],vetor[b],vetor[c],vetor[d]);	

    cont++;
    vetor.clear();
  }

  return 0;
}
