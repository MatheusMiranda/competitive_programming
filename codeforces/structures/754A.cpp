#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<int> vet;

int soma[110];

int main(){
  
  int n;
  int a;
  cin >> n;
  int cont = 1;
  int flag = 0;
  memset(soma,0,sizeof soma);

  while(n--){
    cin >> a;
    if(a != 0) flag = 1;
    vet.push_back(a);
    soma[cont] += a;
    soma[cont] += soma[cont - 1];
    
    cont++; 
  }

  if(flag == 0) cout << "NO" << endl;
  else{
      cout << "YES" << endl;
      if(soma[cont - 1] != 0){
        cout << "1" << endl;
        cout << "1 " << vet.size() << endl;
      }else{
        cout << "2" << endl;
        for(int i = 1;i <= vet.size();++i){
          if(soma[i] != 0){
            cout << "1 " << i << endl;
            cout << i + 1 << " " << vet.size() << endl;
            break;
          }  
        }  
      }
  }   

  return 0;
}
