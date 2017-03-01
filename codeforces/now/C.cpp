#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;
using par = pair<int,int>;

vector<int> vet[100001];
map<string,int> dic;
map<int,string> rev;
map<par,int> treta;
vector<int> resp;

int add(int no, int out){

  for(auto el : vet[no]){
    if(el > 0){
      vet[el].push_back(out);
    }
  }
  vet[no].push_back(out);
}

int main(){

  int n,m,q;
  string p,p2;
  int ind1,ind2;

  scanf("%d %d %d",&n,&m,&q);

  for(int i = 1;i <= n;++i){
    cin >> p;
    dic[p] = i;
    rev[i] = p;
  }

  int t; 
    
  for(int i = 0;i < m;++i){
    scanf("%d",&t);
    cin >> p >> p2;
    ind1 = dic[p];
    ind2 = dic[p2];
    if(t == 1) add(dic[p],dic[p2]);
    else add(dic[p],-dic[p2]);
  }
    
  int t1,t2;

  for(int i =0;i < q;++i){
    t1 = 0;
    t2 = 0;
    cin >> p >> p2; 
    ind1 = dic[p];
    ind2 = dic[p2];

    //if(treta[make_pair(min(ind1,ind2),max(ind1,ind2))]){
      //resp.push_back(2);
      //continue;
   // }

    for(int i = 0;i < vet[ind1].size();++i){
      if(vet[ind1][i] == ind2){
        t1 = 1;
        break;
      } 
      else if(vet[ind1][i] == -ind2){
        t1 = -1;
        break;
      }
    }
    for(int i = 0;i < vet[ind2].size();++i){
      if(vet[ind2][i] == ind1){
        t2 = 1;
        break;
      } 
      else if(vet[ind2][i] == -ind1){
        t2 = -1;
        break;
      }
    }
      
    if(t1 + t2 == 0 && t1 != 0 && t2 != 0){
      printf("NO\n");
      treta[make_pair(min(ind1,ind2),max(ind1,ind2))] = 1;
      resp.push_back(2);
    }else if(t1 + t2 == 1 || t1 + t2 == 2){
      printf("YES\n");
      resp.push_back(1); 
    }else if(t1 + t2 == -1 || t1 + t2 == -2){
      printf("YES\n");
      resp.push_back(2);
    }else if(t1 + t2 == 0){
      printf("YES\n");
      resp.push_back(3);
    }  
     
  }

  for(int i = 0;i < resp.size();++i) printf("%d\n",resp[i]);

  return 0;
}
