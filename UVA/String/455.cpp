#include <bits/stdc++.h>

using namespace std;
map<char,int> dic;

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

  vector<int>
borders1(const string& pat)
{
  int m = pat.size();
  int i = 1, j = 0;

  vector<int> bord(m + 1, 0);    // Inicialmente, bord[j] = 0 para todo j
  bord[0] = -1;

  while (i < m + 1)
  {
    while (i + j < m and pat[j] == pat[i + j])
    {
      ++j;
      bord[i + j] = max(bord[i + j], j);
    }

    i += j - bord[j]; 
    j = max(0, bord[j]);
  } 

  return bord;
}

vector<int> vet;

int main(){

  string p;
  int t;
  cin >> t;

  int cont = 0;

  while(t--){
    //if(cont++) cout << endl;
    cin >> p;
    vet = borders(p);
    string a;

    a = p;
  
    bool flag = true;
    int fim = p.size()-1;
    for(int i = 0;i <= p.size()/2;++i){
      if(i == fim){
           dic[p[i]]++;
           continue;
      }
      if(p[i] != p[fim]) flag = false;
      dic[p[i]]++;
      dic[p[fim]]++;

      fim--;
    }

    for(auto el: vet){
      cout << " " << el;
    }
    cout << endl;

    if(!flag){
      if(vet[p.size()] >= p.size()/2){
        cout << p.size() - vet[p.size()] << endl;
      }else{
        cout << p.size() << endl;
      }
    }else{
      if(dic[p[0]] == p.size()) cout << 1 << endl;
      else cout << p.size() << endl;
    }
    cout << endl;
  }

  return 0;
}
