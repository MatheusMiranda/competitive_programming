#include <iostream>
#include <cstdio>

using namespace std;

#define MAX 1032

int matrix[MAX][MAX];
  int x,y;

void bfs(int i,int j){

  if(i > 0 && matrix[i - 1][j] == 0){
    matrix[i - 1][j] = 1;
    bfs(i-1,j);
  }

  if(i < x-1 && matrix[i + 1][j] == 0){
    matrix[i + 1][j] = 1;
    bfs(i + 1,j);
  }

 if(j > 0 && matrix[i][j - 1] == 0){
    matrix[i][j - 1] = 1;
    bfs(i,j - 1);
  }

   if(j < y  -1 && matrix[i][j + 1] == 0){
    matrix[i][j + 1] = 1;
    bfs(i,j + 1);
  }

}


int main(){

  char letra;
  scanf("%d %d",&x,&y);
  int cont = 0;

  for (int i = 0; i < x; ++i)
  {
    for (int j = 0; j < y; ++j)
    {
      scanf(" %c",&letra);
      if(letra == 'o') matrix[i][j] = 1;
    }

  }

  for (int i = 0; i < x; ++i)
  {
    for (int j = 0; j < y; ++j)
    {
      if(matrix[i][j] == 0){
         cont++;
         matrix[i][j] = 1;
         bfs(i,j);
      }

    }
  }

  printf("%d\n",cont);


  return 0;
}
