#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

map<string,int> dic;

bool func(char a,char b){
  return a > b;
}

int main(){
  
  string a,old,res;

  while(1){
    cin >> a;
    if(a == "0") break;
          
    printf("Original number was %s\n",a.c_str());

    int cont = 0;

    while(1){
      old = a;
      sort(a.begin(),a.end(),func);
      sort(old.begin(),old.end());

      int num = stoi(a) - stoi(old);
      res = to_string(num);

      printf("%d - %d = %d\n",stoi(a.c_str()),stoi(old.c_str()),stoi(res.c_str()));
      cont++;

      if(dic[res]) break;
      dic[res] = 1;
      a = res;

    }

    dic.clear();
    printf("Chain length %d\n\n",cont);
  }

  return 0;
}
