
#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{

  string palavra,palavraCorreta;
  int flag = 0,j = 0;
  map<string,int> dicionario;

  while(cin >> palavra){

    for (int i = 0; i < palavra.length(); ++i)
    {

      if(isalpha(palavra[i])){

        palavraCorreta += palavra[i];

      }
      else{

        if(palavraCorreta.length() != 0){

          //flag = 1;
          transform(palavraCorreta.begin(),palavraCorreta.end(),palavraCorreta.begin(),::tolower);
          dicionario.insert ( pair<string,int>(palavraCorreta,1) );
          palavraCorreta.clear();

        }

      }

    }

    //if(flag == 0){

      transform(palavraCorreta.begin(),palavraCorreta.end(),palavraCorreta.begin(),::tolower);
      dicionario.insert ( pair<string,int>(palavraCorreta,1) );
      palavraCorreta.clear();

    //}

    flag = 0;

  }

  map<string,int>::iterator it = dicionario.begin();
  for (it=dicionario.begin(); it!=dicionario.end(); ++it)
    cout << it->first << '\n';

  return 0;
}
