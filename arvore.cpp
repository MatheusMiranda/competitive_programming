#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int quantidade = 0;

typedef struct No
{
  struct No * pai;
  struct No * filhoEsquerda;
  struct No * filhoDireita;
  int valor;
}No;

No * inserirNaArvore(No * ponteiroNoRaiz,int valorNovo){

  if(ponteiroNoRaiz == NULL){
    No * ponteiro = new No[1];
    ponteiro->pai = NULL;
    ponteiro->filhoEsquerda = NULL;
    ponteiro->filhoDireita = NULL;
    ponteiro->valor = valorNovo;
    ponteiroNoRaiz = ponteiro;
    //quantidade++;
    //printf("O valor da parada é igual a :%d\n",ponteiroNoRaiz->valor);
    return ponteiroNoRaiz;
  }
  else{

    if(ponteiroNoRaiz->valor > valorNovo){

        inserirNaArvore(ponteiroNoRaiz->filhoEsquerda,valorNovo);

    }
    else if(ponteiroNoRaiz->valor < valorNovo){

      inserirNaArvore(ponteiroNoRaiz->filhoDireita,valorNovo);

    }

  }

}

void mostrarArvore(No * ponteiroNoRaiz){
  if(ponteiroNoRaiz != NULL){
   printf("%d\n",ponteiroNoRaiz->valor);
   mostrarArvore(ponteiroNoRaiz->filhoEsquerda);
   mostrarArvore(ponteiroNoRaiz->filhoDireita);
  }
}

void desalocaArvore(No * ponteiroNoRaiz){

  // if (ponteiroNoRaiz->filhoEsquerda == NULL && ponteiroNoRaiz->filhoDireita != NULL){
  //   No * aux = ponteiroNoRaiz->pai;
  //   delete[] ponteiroNoRaiz;
  //   ponteiroNoRaiz = aux;
  //   return ponteiroNoRaiz;
  // }
  if(ponteiroNoRaiz != NULL){
    desalocaArvore(ponteiroNoRaiz->filhoEsquerda);
    desalocaArvore(ponteiroNoRaiz->filhoDireita);
    delete[] ponteiroNoRaiz;
  }
  //desalocaArvore(ponteiroNoRaiz);
  ponteiroNoRaiz = NULL;
}

int main()
{
  No * ponteiroNoRaiz = NULL;
  int valor;

  printf("Digite o valor que deseja inserir na árvore\n");
  scanf("%d",&valor);
  ponteiroNoRaiz = inserirNaArvore(ponteiroNoRaiz,valor);
  //printf("Quantidade igual a:%d\n",quantidade);
  mostrarArvore(ponteiroNoRaiz);
  desalocaArvore(ponteiroNoRaiz);
  mostrarArvore(ponteiroNoRaiz);
  return 0;
}
