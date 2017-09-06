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
  map<string,int> dicionario;

	while(cin >> palavra){

		for (int i = 0; i < palavra.length(); ++i)
		{

			if(isalpha(palavra[i])){

				palavraCorreta += tolower(palavra[i]);

			}
			else{

        if(palavraCorreta.length() != 0){

          dicionario.insert ( pair<string,int>(palavraCorreta,1) );
          palavraCorreta.clear();

        }

			}

		}

      if(palavraCorreta.length() != 0){

      dicionario.insert ( pair<string,int>(palavraCorreta,1) );
      palavraCorreta.clear();

      }

	}

  map<string,int>::iterator it = dicionario.begin();
  for (it=dicionario.begin(); it!=dicionario.end(); ++it)
    cout << it->first << endl;

	return 0;
}
