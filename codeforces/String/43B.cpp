#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char,int> dic;
map<char,int> dic2;

int main(){

  string a,b;
  getline(cin,a);
  getline(cin,b);

  for(int i =0;i < a.size();++i){
    dic[a[i]]++;
  }
  for(int i = 0;i < b.size();++i){
    dic2[b[i]]++;
  }

  int flag = 1;
  for(auto s : dic2){
    if(dic[s.first] < s.second){
     if(s.first == ' ')continue;
     flag = 0;
     break;
    }
  }

  if(flag) printf("YES\n");
  else printf("NO\n");
  return 0;
}
