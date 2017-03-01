#include <iostream>
#include <string>

using namespace std;

int main(){
  string p;
  cin >> p;
  int count = 0;

  for(int i =0;i < p.size();++i){
    if(i < p.size() - 2){
      if(p[i] == 'W'){
        if(p[i+1] == 'U' && p[i+2] == 'B'){
          if(count){
            printf(" ");
            count = 0;
          }
          i+=2;
          continue;
        }else{
          count++;
          printf("%c",p[i]);
        }   
      }
      else{
        printf("%c",p[i]);
        count++;
      }  
    }
    else{
      count++;
      printf("%c",p[i]);
    }  
  } 

  cout << endl;


  return 0;
}
