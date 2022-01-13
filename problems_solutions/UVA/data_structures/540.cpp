#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;

  int caso = 0;
  while(cin >> t,t){
    int contador = 1;
    printf("Scenario #%d\n",++caso);
    map<int, queue<int> > mbt;
    map<int,int> team;
    queue<int> q;
    map<int,int> cont;
    int a,b;
    while(t--){
      scanf("%d",&a);
      while(a--){
        scanf("%d",&b);
        team[b] = contador;
      }
      contador++;
    }
    
    string c;

    while(1){
      cin >> c;
      if(c == "STOP"){
        break;
      }
      else if(c == "ENQUEUE"){
        int num;
        cin >> num;
        mbt[team[num]].push(num);
        cont[team[num]]++;

        if(cont[team[num]] == 1){
          q.push(team[num]);
        }
      }else{
        int team_front = q.front();
        int el = mbt[team_front].front();
        mbt[team_front].pop();
        cont[team_front]--;
        if(cont[team_front] == 0) q.pop();

        cout << el << endl;
      }
    }
    
    cout << endl;
  }

  return 0;
}
