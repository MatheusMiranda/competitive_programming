#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<char> vet;

int main(){
  vet.push_back('h');
  vet.push_back('e');
  vet.push_back('l');
  vet.push_back('l');
  vet.push_back('o');
  int flag = 0;
  string p;
  cin >> p;

  for(int i  =0;i < p.size();++i){
    if(p[i] == vet[flag]){
        flag++;
    }
    if(flag == 5)break;
  }

  if(flag == 5)printf("YES\n");
  else printf("NO\n");

  return 0;
}
