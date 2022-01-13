#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;
using par = pair<int,int>;

char matrizona[42][42];
par us[] {par(-1,0),par(0,1),par(1,0),par(0,-1)};

map<char,int> dic;

int func(string & p1,string & p2){

  int n = p1.size();
  int m = p2.size();

  vector< vector<int> > mt(n+1, vector<int>(m+1,0));


  for(int i = 0;i <= n;++i){
    for(int j = 0;j <= m;++j){
      if(i == 0 || j == 0) mt[i][j] = 0;
        
      else if(p1[i-1] == p2[j-1]) mt[i][j] = 1 + mt[i-1][j-1];
      
      else mt[i][j] = max(mt[i-1][j],mt[i][j-1]);
    }
  }

  return mt[n][m];
}  

int main(){
  
  dic['N'] = 0;
  dic['E'] = 1;
  dic['S'] = 2;
  dic['W'] = 3;

  string cam,p1,p2;
  int t;
  int h,w,x,y,n;
  cin >> t;
  int caso = 0;
  char letra;

  while(t--){
    p1 = "",p2 = "";
    cin >> h >> w;

    for(int i  =1;i <= h;++i)
      for(int j  =1;j <= w;++j)
        cin >> matrizona[i][j];

    cin >> n >> x >> y;
    p1+= matrizona[x][y];

    for(int i = 0;i < n;++i){
      cin >> letra;
      x += us[dic[letra]].first;
      y += us[dic[letra]].second;
      p1+= matrizona[x][y];
    } 

    cin >> n >> x >> y;
    p2+= matrizona[x][y];

    for(int i = 0;i < n;++i){
      cin >> letra;
      x += us[dic[letra]].first;
      y += us[dic[letra]].second;
      p2+= matrizona[x][y];
    }
    
    int resp = func(p1,p2);

    printf("Case %d: %d %d\n",++caso,p1.size() - resp,p2.size() - resp);
    
  }  

  return 0;
}
