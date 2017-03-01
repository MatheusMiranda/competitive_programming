#include <iostream>
#include <map>
#include <string>

using namespace std;

map<int,char> dic;
map<char,int> deads;

int main(){
  
  string p;
  int r = 0,g = 0,y=0,b =0;

  cin >> p;

  for(int i = 1;i <= p.size();++i){
    if(p[i-1] != '!')dic[i%4] = p[i-1];
  }

  for(int i = 1;i<=p.size();++i){
    if(p[i-1] == '!'){
      deads[dic[i%4]]++;  
    }  
  }

  for(auto s : deads){
    if(s.first == 'B') b+= s.second;
    else if(s.first == 'Y') y+= s.second;
    else if(s.first == 'G') g+= s.second;
    else if(s.first == 'R') r+= s.second;
  } 

  cout << r << " " <<b <<" "<<y <<" " <<g <<  endl;

  return 0;
}
