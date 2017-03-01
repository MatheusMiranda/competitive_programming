#include <iostream>
#include <string>

using namespace std;

string p1,p2;

long long ed(int p,int s){
 
  if(p == 0) return s;
  if(s == 0) return p;   
  
  long long  soma = 0;
  
  if(p1[p-1] == p2[s-1]) soma = ed(p-1,s-1);   
  else{
       soma = min(min(1 + ed(p,s-1),1 + ed(p-1,s)),1 + ed(p-1,s-1));
  }

  return soma;
  
}

int main(){
  
  cin >> p1 >> p2;

  cout << ed(p1.size(),p2.size()) << endl;

  return 0;
}
