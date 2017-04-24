#include <bits/stdc++.h>

using namespace std;

int main(){

  string haiku,line;
  while(1){

    getline(cin,haiku);
    if(haiku == "e/o/i")break;

    stringstream is(haiku);
    
    smatch m; 
    const regex m_five("^[^(a|e|i|o|u|y]*(a|e|i|o|u|y)+[^(a|e|i|o|u|y)]+(a|e|i|o|u|y)+[^(a|e|i|o|u|y)]+(a|e|i|o|u|y)+[^(a|e|i|o|u|y)]+(a|e|i|o|u|y)+[^(a|e|i|o|u|y]+(a|e|i|o|u|y)+[^(a|e|i|o|u|y]*$");

    const regex m_seven("^[^(a|e|i|o|u|y)]*(a|e|i|o|u|y)+[^(a|e|i|o|u|y)]+(a|e|i|o|u|y)+[^(a|e|i|o|u|y)]+(a|e|i|o|u|y)+[^(a|e|i|o|u|y)]+(a|e|i|o|u|y)+[^(a|e|i|o|u|y)]+(a|e|i|o|u|y)+[^(a|e|i|o|u|y)]+(a|e|i|o|u|y)+[^(a|e|i|o|u|y)]+(a|e|i|o|u|y)+[^(a|e|i|o|u|y)]*$");

    int cont = 0;
    int n;

    getline(is,line,'/');
    if(regex_search(line,m,m_five)){
      cont++; 
      getline(is,line,'/');
      
      if(regex_search(line,m,m_seven)){
        cont++;
        getline(is,line);
        
        if(regex_search(line,m,m_five)){
          cont++;
        } 
      }
    }

    if(cont == 3) printf("Y\n");
    else printf("%d\n",cont+1);

  }


  return 0;
}
