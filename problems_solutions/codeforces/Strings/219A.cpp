#include <string>
#include <iostream>
#include <algorithm>
#include <map>


using namespace std;
map<char,int> dic;

int main(){

  int n,flag = 1;
  string palavra;
  scanf("%d",&n);
  cin >> palavra;

  for(int i  =0;i < palavra.size();++i){
    dic[palavra[i]]++; 
  }
 
  for(auto s : dic){
   
    if(s.second%n!=0){
        flag = 0;
        break;
    }
  } 

  if(!flag) printf("-1");
  else{
   
    for(int i = 0;i < n;++i){
       for(auto s : dic){
         for(int j = 0;j < s.second / n;++j){
            printf("%c",s.first);
         }  
       }  
    }  
    
  }

  printf("\n");

  return 0;
}
