#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(){

  string palavraLida,palavraCorreta;

  while(getline(cin,palavraLida)){

    for (int i = 0; i < palavraLida.length(); ++i)
    {
      if(palavraLida[i] != ' ' && palavraLida[i] != ','){

        if(palavraLida[i] == 'O' || palavraLida[i] == 'o'){
          palavraCorreta += '0';
        }
        else if(palavraLida[i] == 'l'){
          palavraCorreta += '1';
        }
        else if(isdigit(palavraLida[i])){

          palavraCorreta += palavraLida[i];

        }else{
          palavraCorreta.clear();
          break;
        }
      }
    }

    long long numero = atoll(palavraCorreta.c_str());

    if(numero > 2147483647 || palavraCorreta.empty()){
      printf("error\n");
    }
    else{
      printf("%lld\n",numero);
    }

    palavraCorreta.clear();
    palavraLida.clear();

  }

  return 0;
}
