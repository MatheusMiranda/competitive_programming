#include <iostream>
#include <string>

using namespace std;

int main(){

  int n;
  scanf("%d",&n);
  string a,b,c;

  while(n--){
    cin >> a >> b;


    if(a.size() >= b.size()){
      c = a.substr(a.size() - b.size());

      if(b == c) cout << "encaixa" << endl;
      else cout << "nao encaixa" << endl;

    }else{
      cout << "nao encaixa" << endl;

    }

  }

  return 0;
}
