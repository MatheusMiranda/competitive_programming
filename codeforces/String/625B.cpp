#include <bits/stdc++.h>

using namespace std;

vector<int> borders(const string& pat)
{
    int m = pat.size();
    int t = -1;

    vector<int> bord(m + 1);
    bord[0] = -1;

    for (int j = 1; j <= m; ++j)
    {
        while (t >= 0 and pat[t] != pat[j - 1])
            t = bord[t];

        ++t;
        bord[j] = t;
    }

    return bord;
}

int MP(string t,string p){

  int n = t.size();
  int m = p.size();
  int i = 0,j= 0,oc = 0;

  vector<int> bords = borders(p);

  while(i <= n -m){
    while(j < m and p[j] == t[i + j])j++;

    if(j==m){
       ++oc;
    }

    int shift = j - bords[j];
    
    i += shift;
    j = max(0,j - shift);
  }

  return oc;
}

int main(){

  string t,p;
  cin >> t;
  cin >> p;

  int resp = MP(t,p);

  if(resp == t.size() - p.size() + 1){
    resp = t.size() / p.size();
  }

  cout << resp << endl;

  return 0;
}


