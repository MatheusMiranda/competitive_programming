#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;
using par = pair<int,int>;

map<int,par> dic;


int main(){

  int n,a;
  cin >> n;

  for(int i = 0;i < n;++i){
    cin >> a; 
    if(dic[a].first == 0){
      dic[a].first = -1;
      dic[a].second = i;
    }  
    else if(dic[a].first == -1){
      dic[a].first = 2;
      dic[a].second = i - dic[a].second;
    }else{
      int comp = dic[a].second;
      dic[a].second = i -dic[a].second;
      if(comp != dic[a].second) dic[a]
    }  
  }

  cout << dic.size() << endl;

  for(auto el : dic){
    if(el.second.first == -1) el.second.second = 0;
    cout << el.first << " " << el.second.second << endl;
  }  

  return 0;
}
