#include <bits/stdc++.h>

using namespace std;

vector<int> vet;

int main(){

  string p;
  cin >> p;

  int len = p.size();

  long long soma = 0;
  int cont1= 0;
  int cont2 = 0;
  int cont0 = 0;

  for(int i = 0;i < p.size();++i){
    int a = p[i] - '0';
    if(p[i] == '0')cont0++;
    soma += a;
    vet.push_back(a % 3);
    if(a % 3 == 1) cont1++;
    else if(a % 3 == 2) cont2++;
  }

  int res = soma % 3;

  if(p[0] == '1' && cont0 == p.size() -1 && cont0 > 0) printf("0\n");
  else if(res == 0){
      bool flag = true;
      for(int i  =0;i < p.size();++i){
        if(p[i] == '0' && flag == true){
          continue;
        }else{
          flag = false;
        }
        printf("%c",p[i]);
      }
      printf("\n");
  }
  else{

    string numzao = "";

    if(res == 1){

      if(cont1 > 0){

        bool flag = false;

        for(int i = 0;i < p.size();++i){

          if((p[i] - '0') % 3 == 1 && flag == false){
            flag = true;
            continue;
          }
          numzao+=p[i];
        }

      }else{

        int er = 0;

        for(int i = 0;i < p.size();++i){
          if((p[i] - '0') % 3 == 2 && er < 2){
            er++;
            continue;
          }
          numzao+=p[i];
        } 

      }

    }else if(res == 2){


      if(cont2 > 0){


        bool flag = false;

        for(int i = 0;i < p.size();++i){
          if((p[i] - '0') % 3 == 2 && flag == false){
            flag = true;
            continue;
          }
          numzao += p[i];
        } 

      }else{


        int er = 0;

        for(int i = 0;i < p.size();++i){
          if((p[i] - '0') % 3 == 1 && er < 2){
            er++;
            continue;
          }
          numzao+=p[i];
        } 

      }       

    }

    if(numzao.size() == p.size() || numzao.size() == 0) printf("-1\n");
    else{

      bool flag = true;
      for(int i  =0;i < numzao.size();++i){
        if(numzao[i] == '0' && flag == true){
          continue;
        }else{
          flag = false;
        }
        printf("%c",numzao[i]);
      }
      printf("\n");
    }

  } 

  return 0;
}

