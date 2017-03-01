#include <iostream>
#include <cstdio>

using namespace std;

int main(){

  int casos,total = 0,c = 0,r = 0,s = 0,num;
  char letra;
  float porc,p;

  scanf("%d",&casos);

  for(int i = 0;i < casos;++i){
    scanf("%d",&num);
    getchar();
    scanf("%c",&letra);
    getchar();

    if(letra == 'C'){
      c+= num;
    }else if(letra == 'S'){
      s+= num;
    }else{
      r+= num;
    }
  }

  total = c + r + s;

  printf("Total: %d cobaias\n",total);
  printf("Total de coelhos: %d\n",c);
  printf("Total de ratos: %d\n",r);
  printf("Total de sapos: %d\n",s);
  p = (float)((100.0 * c) /total);
  printf("Percentual de coelhos: %.2f %%\n",p);
  p = (float)((100.0 * r) /total);
  printf("Percentual de ratos: %.2f %%\n",p);
  p = (float)((100.0 * s) /total);
  printf("Percentual de sapos: %.2f %%\n",p);


  return 0;

}
