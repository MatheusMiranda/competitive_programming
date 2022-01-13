#include <bits/stdc++.h>

using namespace std;
using par = pair<int,string>;

map<string, string> alunos;
map<string, int > projetos;
priority_queue<par, vector<par>, greater<par> > pq; 

int main(){

  string palavra;
  string pro;
  int a = 1;

  while(a){
    while(1){
      getline(cin,palavra);
      if(palavra == "1") break;
      if(palavra == "0"){
        a = 0;
        break;
      }
      if(isupper(palavra[0])){
        pro = palavra;
        projetos[pro] = 0;
        continue;
      }

      if(alunos[palavra] == ""){
        alunos[palavra] = pro;
        projetos[pro]++;
      }
      else if(alunos[palavra] == "NULL" || pro == alunos[palavra]){
        continue;
      }
      else{
        projetos[alunos[palavra]]--;
        alunos[palavra] = "NULL";
      }

    }
    for(auto el : projetos){
      pq.push(par(-el.second,el.first));
    }

    while(!pq.empty()){
      par a = pq.top();pq.pop();
      cout << a.second << " " << -a.first << endl;  
    }

    projetos.clear();
    alunos.clear();
  }

  return 0;
}
