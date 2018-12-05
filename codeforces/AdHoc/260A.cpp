#include <bits/stdc++.h>

using namespace std;

int main(){
  int a,b,n;

  cin >> a >> b >> n;
  string aux;
  bool flag = false;
  int valor;

  for(int i = 0;i <= 9;++i){
    aux = to_string(a);
    aux += (char)i + 48;
    valor = stoi(aux);
    if(valor % b == 0){
       flag = true;
       break;
    }
  }

  n--;


  if(!flag) cout << -1 << endl;
  else{
    aux = to_string(valor);
    while(n--){
      aux += '0';
    }
    cout << aux << endl;
  }

	return 0;
}
