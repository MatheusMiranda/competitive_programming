#include <iostream>
#include <cstdio>
#include <stack>
#include <string>

using namespace std;

int main(){

  string rna;
  stack<char> pilha;
  int contador = 0;

  while(cin >> rna){

    for (int i = 0; i<rna.size(); ++i){

        if(pilha.empty()){
          pilha.push(rna[i]);
        }else{

          if(rna[i] == 'B'){
            if(pilha.top() == 'S'){
              pilha.pop();
              contador ++;
            }
            else{
              pilha.push(rna[i]);
            }
          }else if(rna[i] == 'C'){
             if(pilha.top() == 'F'){
              pilha.pop();
              contador ++;
            }
            else{
              pilha.push(rna[i]);
            }
          }else if(rna[i] == 'F'){
             if(pilha.top() == 'C'){
              pilha.pop();
              contador ++;
            }
            else{
              pilha.push(rna[i]);
            }
          }else{
             if(pilha.top() == 'B'){
              pilha.pop();
              contador ++;
            }
            else{
              pilha.push(rna[i]);
            }
          }
        }
    }

    printf("%d\n",contador);
    while(!pilha.empty()){

      pilha.pop();

    }
    contador = 0;
  }
  return 0;
}
