#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
  int tamanho,consulta,numero,numDesejado,ocorrencia;
  vector<int> vetor;
  map<int,vector<int> > mapa;

  while(scanf("%d %d",&tamanho,&consulta) != EOF){

    mapa.clear();

    for (int i = 0; i < tamanho; ++i)
    {
      //cin >> numero;
      scanf("%d",&numero);

      // if(mapa.find(numero) == mapa.end()){

      //   vetor.clear();
      //   vetor.push_back(i + 1);
      //   mapa.insert(pair<int,vector<int> >(numero,vetor));

      // }
      // else{

        mapa[numero].push_back(i + 1);

    //  }
    }

    for (int i = 0; i < consulta; ++i){

      //cin >> ocorrencia >> numDesejado;
      scanf("%d %d",&ocorrencia,&numDesejado);

        if(ocorrencia > mapa[numDesejado].size() || ocorrencia <= 0){

          printf("0\n");

        }
        else{

          //cout << mapa[numDesejado][ocorrencia - 1] << "\n";
          printf("%d\n",mapa[numDesejado][ocorrencia - 1]);

        }

    }

  }

  return 0;

}
