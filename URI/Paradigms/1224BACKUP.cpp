#include <bits/stdc++.h>

using namespace std;

#define MAX 10000

vector<int> vet;
 
int fs(int a,int b,int c){
    
    int sec;

    scanf( "%d %d %d", &a, &b, &c );

    if ( a < b )
    {
        if ( b < c ) sec = b;
        else sec = ( a < c ? c : a );
    }
    else
    {
        if ( a < c ) sec = a;
        else sec = ( b < c ? c : b );
    }

    return sec;
}

int main(){

  int n;
  int a;
  while(scanf("%d",&n) != EOF){

    vector<int> mine(n+1,0);

    for(int i  =0;i < n;++i){
      scanf("%d",&a);
      vet.push_back(a);
    }

    int left = vet.size()/2 - 1;
    int right = vet.size()/2;
    int cont = 1;
    int stop_condition = n/2;

    while(1){

      if(cont == 1){
        mine[left] = vet[left];
        mine[right] = vet[right];
      }
      else if(cont == 2){
      
        mine[left] = vet[left] + fs(vet[left+1],vet[right],vet[right-1]);
        mine[right] = vet[right] + fs(vet[left],vet[left+1],vet[right-1]);  
    
      }else{

        mine[left] = (vet[left+1] < vet[right])? vet[left] + max(mine[left+1],mine[right-1]) : vet[left] + max(mine[left+2],vet[right]);
        mine[right] = (vet[left] < vet[right-1])? vet[right] + max(vet[left],mine[right-2]) : vet[right] + max(mine[left+1],mine[right-1]);      

      }

      if(cont == stop_condition)break;

      right++;
      left--;
      cont++;
  
    }    
 
    printf("%d\n",max(mine[left],mine[right]));
    vet.clear();

  }

  return 0;
}
