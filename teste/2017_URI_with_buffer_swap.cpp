#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> vet;

int alter;

int ed(string p1,string p2){

  alter = 0;
    
  int m = p1.size();
  int n = p2.size();

  vector<int> b1(n+1,1);
  vector<int> b2(n+1,1);

  for(int i = 0;i <= m;++i){
    for(int j = 0;j <= n;++j){
        
      if(i == 0){
         //v[i][j] = j;
        b1[j] = j;
        b2[j] = j;
      }
      else if(j == 0){
        if(alter) b1[j] = i;      
        else b2[j] = i;
      }
      else if(p1[i-1] == p2[j-1]){
        if(alter) b1[j] = b2[j-1];
        else b2[j] = b1[j-1];
      }
      else{
          if(alter) b1[j] = 1 + min(min(b1[j-1],b2[j]),b2[j-1]);
          else b2[j] = 1 + min(min(b2[j-1],b1[j]),b1[j-1]);
      }
    }

    alter = 1 - alter;  
  
  } 

  if(alter) return b2[n]; 
  else return b1[n];
}

int main(){

  string p,p2;
  cin >> p;
  int k;
  scanf("%d",&k);

  for(int i = 0;i < 5;++i){
    cin >> p2;
    vet.push_back(p2);
  }
  
  int min = 1<<30;
  int ind,res;

  for(int i = 0;i < vet.size();++i){
    res = ed(p,vet[i]);

    if(res < min){
      min = res;
      ind = i;
    }
  }

  if(min < k){
     printf("%d\n%d\n",ind+1,min);
  }
  else printf("-1\n");

  return 0;
}
