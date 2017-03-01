#include <iostream>
#include <cstring>
#include <vector>
#include <cstdio>

using namespace std;

#define MAX 10003
vector<int> campis;
vector<int> vetorzao[MAX];

int main(){

  int numeroDeCampi,numeroDeLinhas;

  scanf("%d %d",&numeroDeCampi,&numeroDeLinhas);

  for (int i = 0; i < numeroDeLinhas; ++i)
  {

    int n,num;

    scanf("%d",&n);

    for (int j = 0; j < n; ++j)
    {
      scanf("%d",&num);
      campis.push_back(num);
    }

    int v;

    for (int k = 0; k < campis.size(); ++k)
    {
      v = campis[k];

      for (int l = 0; l < campis.size(); ++l)
      {
        vetorzao[v].push_back(campis[l]);
      }


    }

    // for (int i = 0; i < vetorzao[2].size(); ++i)
    // {
    //   printf("Elementos do 2%d\n",vetorzao[2][i]);
    // }

    // for (int i = 0; i < vetorzao[3].size(); ++i)
    // {
    //   printf("Elementos do 3%d\n",vetorzao[3][i]);
    // }

    // for (int i = 0; i < vetorzao[4].size(); ++i)
    // {
    //   printf("Elementos do 4%d\n",vetorzao[4][i]);
    // }

  }

  return 0;
}
