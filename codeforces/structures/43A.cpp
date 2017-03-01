#include <iostream>
#include <string>
#include <map>


using namespace std;
map<string,int> dic;

int main(){

  int n;
  string time;
  cin >> n;
  while(n--){
    cin >> time;
    dic[time]++;
  } 
  
  int maior = -1;
  for(auto ea : dic){
      if(ea.second > maior){
        maior = ea.second;
        time = ea.first;
      }  
  }

  cout << time << endl;

  return 0;
}
