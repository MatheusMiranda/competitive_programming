#include <bits/stdc++.h>

using namespace std;

int main(){
    string a,b;

    while(cin >> a >> b){
        string aux = "";
        int cont = 1;
        for(int i = a.size() - 1;i >= 0;--i){
            aux+=a[i];
            if(cont == 3 && i != 0){
                aux += ',';
                cont = 0;
            }
            cont++;
        }
        aux += '$';
        reverse(aux.begin(),aux.end());
        if(b.size() == 1)
            cout << aux << ".0" << b << endl;
        else
            cout << aux << "." << b << endl;
    }

    return 0;
}
