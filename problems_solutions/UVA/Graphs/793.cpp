#include <iostream>
#include <cstring>

using namespace std;

int pais[10000];
int ranks[10000];

string s;

int acha_pai(int i){
  if(pais[i] != i)return pais[i] = acha_pai(pais[i]);
  return i;
}

void faz_uniao(int i, int j){
  int pai_j = acha_pai(j);
  int pai_i = acha_pai(i);

  if(ranks[pai_i] > ranks[pai_j]){
    pais[pai_j] = pai_i;
    pais[j] = pai_i;
    ranks[pai_i]++;
  }else{
    pais[pai_i] = pai_j;
    pais[i] = pai_j;
    ranks[pai_j]++;
  }  
}

int main(){

  int a;
  scanf("%d",&a);

  int n;
  char letra;
  int no1,no2;
  int r1,r2;
  int b = a;
  int suc;
  int nsuc;
  while(b--){

    scanf("%d",&n);  

    suc = 0;
    nsuc = 0;
  
    getchar();

      for(int i =0;i< n+1;++i){
        pais[i] = i;
      }

    memset(ranks,0,n + 1);

    while(1){

      if(!getline(cin,s) || s.empty())break;
      sscanf(s.c_str(),"%c %d %d",&letra,&no1,&no2);

      if(letra == 'c'){
          if(pais[no1] != pais[no2])
            faz_uniao(no1,no2);
      }else{
        r1 = acha_pai(no1);
        r2 = acha_pai(no2);

        if(r1 == r2)suc++;
        else nsuc++;
      }  

    }

    if(b != a - 1)printf("\n");
    printf("%d,%d\n",suc,nsuc);

  }

  return 0;
}
